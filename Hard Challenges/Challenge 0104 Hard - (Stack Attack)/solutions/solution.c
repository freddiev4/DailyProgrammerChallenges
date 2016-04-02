#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_ENTRY 255

#define setToken(_token, _type, s_type, _value)\
    _token.type = _type;\
    _token.data_val.s_type = _value;

double add(double a, double b)
{
    return a+b;
}

double sub(double a, double b)
{
    return b-a;
}

double time(double a, double b)
{
    return a*b;
}

double div_(double a, double b)
{
    return b/a;
}

enum {NONE = 0, OPERATOR, NUMBER};
enum {A_NONE = 0, A_LEFT, A_RIGHT};

struct Operators
{
    char op;
    int precedence;
    int associativity;
    double (*callback)(double, double);
} operators[]=
{
    {'+', 2, A_LEFT, add},
    {'-', 2, A_LEFT, sub},
    {'*', 3, A_LEFT, time},
    {'/', 3, A_LEFT, div_},
    {'^', 4, A_RIGHT, pow}
};

typedef struct op_stack
{
    char op;
    struct op_stack *prev;
} Op_stack;

typedef struct result_stack
{
    double data;
    struct result_stack *prev;
} Result_stack;

union Data_type
{
    int op;
    double data;
};

typedef struct Token
{
    int type;
    union Data_type data_val;
} Token;

typedef struct deque
{
    Token token;
    struct deque *next;
} Deque;

void stack_push(Op_stack **pile, char op)
{
    Op_stack *tmp = malloc(sizeof(*tmp));

    if(!tmp) exit(EXIT_FAILURE);

    tmp->op = op;
    tmp->prev = *pile;

    *pile = tmp;
}

char stack_pop(Op_stack **pile)
{
    if(*pile == NULL)
        return -1;

    Op_stack *tmp = (*pile)->prev;
    char op = (*pile)->op;

    free(*pile), *pile = NULL;
    *pile = tmp;

    return op;
}

int stack_size(Op_stack *pile)
{
    Op_stack *tmp = pile;
    int size = 0;

    while(tmp)
    {
        size++;
        tmp = tmp->prev;
    }

    return size;
}

void rstack_push(Result_stack **pile, double data)
{
    Result_stack *tmp = malloc(sizeof(*tmp));

    if(!tmp) exit(EXIT_FAILURE);

    tmp->data = data;
    tmp->prev = *pile;

    *pile = tmp;
}

double rstack_pop(Result_stack **pile)
{
    if(*pile == NULL)
        return -1;

    Result_stack *tmp = (*pile)->prev;
    double data = (*pile)->data;

    free(*pile), *pile = NULL;
    *pile = tmp;

    return data;
}

void deque_push(Deque **file, Token token)
{
    Deque *tmp = malloc(sizeof(*tmp));

    if(!tmp) exit(EXIT_FAILURE);

    tmp->token = token;
    tmp->next = NULL;

    if(!*file) *file = tmp;

    else
    {
        Deque *tmp2 = *file;
        while(tmp2->next)
        {
            tmp2 = tmp2->next;
        }
        tmp2->next = tmp;
    }
}

Token deque_pop(Deque **file)
{
    Token token;

    if(!*file) exit(EXIT_FAILURE);
    Deque *tmp = (*file)->next;
    token = (*file)->token;

    free(*file), *file = NULL;
    *file = tmp;

    return token;
}

int getOperatorID(char operator_)
{
    for(int i = 0; i < 5; i++)
    {
        if(operator_ == operators[i].op)
            return i;
    }
    return -1;
}

unsigned int isAnOperator(char c)
{
    return (c == '*' || c == '-' || c == '/' || c == '+' || c == '^');
}

unsigned int isFloat(char c)
{
    return (isdigit(c) || c == '.');
}

void eval_expr(char *str, Deque **f, Op_stack **p)
{
    char buffer[MAX_ENTRY] = "";
    Token token;

    int numberSaved = 0;
    int op_queued = 0;
    int p_size = 0;

    for(unsigned i = 0, j = 0; str[i] != '\0'; i++)
    {
        if(isAnOperator(str[i]))
        {
            p_size = stack_size(*p);

            while(p_size--)
            {
                char p_op = stack_pop(p);
                int p_opId = getOperatorID(p_op);
                int s_opId = getOperatorID(str[i]);

                if((operators[s_opId].associativity == A_LEFT &&
                        operators[s_opId].precedence <= operators[p_opId].precedence) ||
                        (operators[s_opId].associativity == A_RIGHT &&
                         operators[s_opId].precedence < operators[p_opId].precedence))
                {
                    setToken(token, OPERATOR, op, p_opId);
                    deque_push(f, token);
                    op_queued = 1;
                }

                if(!op_queued) stack_push(p, p_op);

                op_queued = 0;
            }
            stack_push(p, str[i]);
        }
        else if(str[i] == '(')
        {
            stack_push(p, str[i]);
        }
        else if(str[i] == ')')
        {
            char p_op;
            while((p_op = stack_pop(p)) != '(')
            {
                if(isAnOperator(p_op))
                {
                    setToken(token, OPERATOR, op, getOperatorID(p_op));
                    deque_push(f, token);
                }
            }
        }

        else if(isFloat(str[i]))
        {
            buffer[j] = str[i];
            j++;
            numberSaved = 0;
        }

        else if(isblank(str[i]) || (i == strlen(str) - 1))
        {
            if(!numberSaved && j > 0)
            {
                setToken(token, NUMBER, data, atof(buffer));
                deque_push(f, token);
                memset(buffer, '\0', j);
                j = 0;
                numberSaved = 1;
            }
        }
    }

    p_size = stack_size(*p);
    while(p_size--)
    {
        char p_op = stack_pop(p);
        if(isAnOperator(p_op))
        {
            setToken(token, OPERATOR, op, getOperatorID(p_op));
            deque_push(f, token);
        }
    }

}

void print_deque(Deque *f)
{
    Deque *tmp = f;

    while(tmp != NULL)
    {
        if(tmp->token.type == OPERATOR)
        {
            printf("%c ", operators[tmp->token.data_val.op].op);
        }
        else if(tmp->token.type == NUMBER)
        {
            printf("%f ", tmp->token.data_val.data);
        }
        else puts("dafuq!");

        tmp = tmp->next;
    }
}

double eval_deque(Deque **f)
{
    double a, b;
    double result;
    Result_stack *r_pile = NULL;
    Token token;

    while(*f != NULL)
    {
        token = deque_pop(f);
        if(token.type == OPERATOR)
        {
            a = rstack_pop(&r_pile);
            b = rstack_pop(&r_pile);
            result = operators[token.data_val.op].callback(a,b);
            rstack_push(&r_pile, result);
        }
        else if(token.type == NUMBER)
        {
            rstack_push(&r_pile, token.data_val.data);
        }
    }

   return r_pile->data;
}

int main(void)
{
    Op_stack *p_pile = NULL;
    Deque *p_file = NULL;

    char entry[MAX_ENTRY] = "";
    //double result = 0;

    fgets(entry, sizeof(entry), stdin);
    eval_expr(entry, &p_file, &p_pile);

    puts("\nIn Reverse Polish notation: ");
    print_deque(p_file);

    printf("\n\nResult = %f\n", eval_deque(&p_file));

    return 0;
}
