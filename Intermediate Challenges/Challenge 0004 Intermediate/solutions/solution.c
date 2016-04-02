/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * solution.c:  Build a calculator that takes normal calculator input and    *
 *              gives the answer (solution to Intermediate problem #4)       *
 *                                                                           *
 *              Alternatively, 'why we don't like doing things like this     *
 *              in C'                                                        *
 *                                                                           *
 * Author:      946336 (https://www.github.com/946336)                       *
 *                                                                           *
 * Compiling:   gcc -Wall -Wextra -pedantic -std=c99 solution.c -o calc -lm  *
 *                                                                           *
 * Running:     ./calc                                                       *
 *                                                                           *
 * Notes:       - This calculator reads from standard input and terminates   *
 *                on EOF (CTRL+D if not piping or redirecting)               *
 *              - This file is a conglomeration of multiple source files.    *
 *                It's not normally this ugly and convoluted                 *
 *                                                                           *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


/****************************************************************************/
/*                                operator.h                                */
/****************************************************************************/

#ifndef CALC_OPERATOR_H
#define CALC_OPERATOR_H 

#include <stdbool.h>

typedef enum TYPE { LITERAL = 0,
                    PAREN,
                    EXP, LOG,
                    MOD, INT,
                    PROD, QUOT,
                    SUM, DIFF
                  } TYPE;

static const char delim[] = "()^|%\\*/+-";

/****************************************************************************/

#define LIT_CHAR    '$'
#define PAREN_CHAR  '&'
#define EXP_CHAR    '^'
#define LOG_CHAR    '|'
#define MOD_CHAR    '%'
#define INT_CHAR    '\\'
#define PROD_CHAR   '*'
#define QUOT_CHAR   '/'
#define SUM_CHAR    '+'
#define DIFF_CHAR   '-'

#define LPAREN '('
#define RPAREN ')'

/****************************************************************************/

TYPE  stringtoTYPE(char *str);
const char *TYPEtostring(TYPE type);

TYPE chartoTYPE(char c);
char TYPEtochar(TYPE type);

bool hasHigherPriorityThan(TYPE lhs, TYPE rhs);

#endif

/****************************************************************************/
/*                                  ast.h                                   */
/****************************************************************************/

#ifndef CALC_AST_H
#define CALC_AST_H 

//#include "operator.h"

#include <stdbool.h>
#include <stdio.h>

#define VERBOSE false

typedef struct AST_Node *AST_Node;

AST_Node AST_new();
void     AST_free(AST_Node *n);
AST_Node AST_copy(AST_Node n);

AST_Node AST_settype(AST_Node n, TYPE type);
AST_Node AST_setright(AST_Node n, AST_Node r);
AST_Node AST_setleft(AST_Node n, AST_Node l);
AST_Node AST_setnum(AST_Node n, double num);

TYPE     AST_gettype(AST_Node n);
AST_Node AST_getright(AST_Node n);
AST_Node AST_getleft(AST_Node n);
double   AST_getnum(AST_Node n);

bool        AST_wellformed(AST_Node root);
bool        AST_caninsertnum(AST_Node root);
AST_Node    AST_rightmost(AST_Node root);

AST_Node AST_insert(AST_Node n, AST_Node root);
AST_Node AST_insertnum(AST_Node n, AST_Node root);
AST_Node AST_insertoperator(AST_Node n, AST_Node root);

bool bindsTighterThan(AST_Node lhs, AST_Node rhs);

void   AST_print(AST_Node root);
double AST_eval(AST_Node);

/****************************************************************************/

// Exists primarily as a debugging tool. Useful for tracking program execution
void label(const char *msg);

#endif

/****************************************************************************/
/*                                tokenize.h                                */
/****************************************************************************/

#ifndef CALC_TOKENIZE_H
#define CALC_TOKENIZE_H 

//#include "ast.h"
//#include "operator.h"

typedef struct Token {
    char c;
    AST_Node n;
} Token;

static const char NULLCHAR = '\0';

Token next_token(char **str);

#endif

/****************************************************************************/
/*                                 explist.h                                */
/****************************************************************************/

#ifndef CALC_EXPLIST_H
#define CALC_EXPLIST_H 

//#include "ast.h"
//#include "operator.h"

typedef struct Explist *Explist;

Explist Explist_new();
void    Explist_free(Explist *e);

void Explist_print(Explist e);

Explist Explist_prepend(Explist head, Explist rest);
Explist Explist_pop(Explist e);

Explist Explist_add(AST_Node n, Explist e);

AST_Node Explist_toAST(Explist e);
Explist  Explist_collapse(Explist e);

bool Explist_singleton(Explist e);

#endif

/****************************************************************************/
/*                                 parse.h                                  */
/****************************************************************************/

#ifndef CALC_PARSE_H
#define CALC_PARSE_H 

//#include "ast.h"
//#include "explist.h"
//#include "tokenize.h"
//#include "operator.h"

AST_Node parse(char *l);

#endif

/****************************************************************************/
/*                                  main.c                                  */
/****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//#include "parse.h"
//#include "ast.h"

/****************************************************************************/

const char *HEADER =    "+: (addition), -: (subtraction), "
                        "*: (multiplication), /: (division), %: (modulus),"
                        " \\: (integer division), ^: (power), "
                        "|: (log: number on left, base on right).\n"
                        "Parentheses will be honored.\n\n";

const char *PROMPT = ">>> ";

/****************************************************************************/

/* Expanding tabs is controlled by the MY_GETLINE_TABWIDTH define */
/* If MY_GETLINE_TABWIDTH is defined, my_getline() will replace   */
/* \t with however many spaces MY_GETLINE_TABWIDTH evaluates to   */
size_t my_getline(char **buf, size_t *size, FILE *fd);

/****************************************************************************/

int main()
{
    char *expr = NULL;
    size_t size;
    size_t len;

    AST_Node root = NULL;

    (void) size;

    fprintf(stderr, "%s", HEADER);

    while (!feof(stdin)) {
        fprintf(stdout, "%s", PROMPT);
        fflush(stdout);
        len = my_getline(&expr, &size, stdin);

        // Empty input
        if (len == (size_t) -1) continue;
        if (len == 1) continue;

        // Kill newline character
        expr[len - 1] = NULLCHAR;

        root = parse(expr);

        if (root == NULL) continue;

        if (VERBOSE) {
            AST_print(root);
            fputc('\n', stdout);
        }
        fprintf(stdout, "= %.15g\n", AST_eval(root));
        AST_free(&root);
    }
    fputc('\n', stdout);

    free(expr);
    return 0;
}

/****************************************************************************/

/* Expanding tabs is controlled by the MY_GETLINE_TABWIDTH define */
/* If MY_GETLINE_TABWIDTH is defined, my_getline() will replace   */
/* \t with however many spaces MY_GETLINE_TABWIDTH evaluates to   */
size_t my_getline(char **buf, size_t *size, FILE *fd)
{
        static const int  INIT_SIZE = 256;
        static const char DELIM1 = '\n';
        static const char DELIM2 = '\r';
        static const char NULLCHAR = '\0';

        if (size == NULL) return (size_t) -1;

        if (*buf == NULL) {
                *buf = malloc(INIT_SIZE * sizeof(**buf));
                if (*buf == NULL) return (size_t) -1;
                *size = INIT_SIZE;
        }

        int c;
        size_t i = 0;

        char peeking;
        do {
                if ((i + 2) >= *size){
                        *buf = realloc(*buf, 2 * (*size) + 1);
                        *size *= 2;
                        if (*buf == NULL) {
                                return (size_t) -1;
                        }
                }

                c = fgetc(fd);
                if ((i + 2) >= *size){
                        *buf = realloc(*buf, 2 * (*size) + 1);
                        *size *= 2;
                        if (*buf == NULL) {
                                return (size_t) -1;
                        }
                }
                /* Lines that are actually blank (no newline at all) are */
                /* reported as invalid. Should only happen in an empty   */
                /* file.                                                 */
                if (c < 0){
                        if (i == 0){
                                *size = -1;
                                return (size_t) -1;
                        }
                        else ++i;
                }
                else {
                        (*buf)[i] = c;
                        /* UNIX line endings:       \n   */
                        /* OSX line endings:        \r   */
                        /* Windows line endings     \r\n */
                        #if defined(MY_GETLINE_TABWIDTH)
                                if ((*buf)[i] == TAB) {
                                        if (*size <=
                                            i + MY_GETLINE_TABWIDTH + 1) {
                                                *buf = realloc(*buf,
                                                              2 * (*size) + 1);
                                                *size *= 2;
                                                if (*buf == NULL)
                                                        return (size_t) -1;
                                        }
                                        #if defined(MY_GETLINE_TABSTOPS)
                                        int dst_to_tabstop =
                                                ((i % MY_GETLINE_TABWIDTH) ? 
                                                (i % MY_GETLINE_TABWIDTH) :
                                                MY_GETLINE_TABWIDTH);
                                        for (size_t q = i;
                                             q < i + dst_to_tabstop;
                                             ++q) {
                                                (*buf)[q] = ' ';
                                        }
                                        i += dst_to_tabstop - 1;
                                        #else
                                        for (size_t q = i;
                                             q < i + MY_GETLINE_TABWIDTH;
                                             ++q) {
                                                (*buf)[q] = ' ';
                                        }
                                        i += MY_GETLINE_TABWIDTH - 1;
                                        #endif
                                }
                        #endif
                        /* UNIX or OS9 */
                        if (((*buf)[i] == DELIM1) || (*buf)[i] == DELIM2) {
                                /* Windows */
                                if ((c == DELIM2) &&
                                        (peeking = fgetc(fd)) != DELIM1)
                                                ungetc(peeking, fd);
                                (*buf)[++i] = NULLCHAR;
                                return i;
                        }
                        ++i;
                }
        } while(c > 0); /* EOF returns a negative value */

        (*buf)[i] = NULLCHAR;
        return i;
}

/****************************************************************************/
/*                                operator.c                                */
/****************************************************************************/

#include <stdlib.h>
#include <stdio.h>

#include <string.h>

//#include "operator.h"

/****************************************************************************/

static const char *LIT_STR =       "[LITERAL]";
static const char *PAREN_STR =     "[PARENTHESIZED GROUP]";
static const char *EXP_STR =       "[EXPONENTIATION]";
static const char *LOG_STR =       "[LOGARITHM]";
static const char *MOD_STR =       "[MODULUS]";
static const char *INT_STR =       "[INTEGER DIVISION]";
static const char *PROD_STR =      "[PRODUCT]";
static const char *QUOT_STR =      "[QUOTIENT]";
static const char *SUM_STR =       "[SUM]";
static const char *DIFF_STR =      "[DIFFERENCE]";

/****************************************************************************/

const char *TYPEtostring(TYPE type)
{
    switch (type) {
        case LITERAL:   return LIT_STR;
        case PAREN:     return PAREN_STR;
        case EXP:       return EXP_STR;
        case LOG:       return LOG_STR;
        case MOD:       return MOD_STR;
        case INT:       return INT_STR;
        case PROD:      return PROD_STR;
        case QUOT:      return QUOT_STR;
        case SUM:       return SUM_STR;
        case DIFF:      return DIFF_STR;
        default:
            fprintf(stderr, "%s\n", "TYPEtostring: Cannot convert invalid "
                                    "TYPE to string");
            exit(EXIT_FAILURE);
    }
}


TYPE stringtoTYPE(char *str)
{
    if (!strcmp(str, LIT_STR))           return LITERAL;
    else if (!strcmp(str, PAREN_STR))    return PAREN;
    else if (!strcmp(str, EXP_STR))      return EXP;
    else if (!strcmp(str, LOG_STR))      return LOG;
    else if (!strcmp(str, MOD_STR))      return MOD;
    else if (!strcmp(str, INT_STR))      return INT;
    else if (!strcmp(str, PROD_STR))     return PROD;
    else if (!strcmp(str, QUOT_STR))     return QUOT;
    else if (!strcmp(str, SUM_STR))      return SUM;
    else if (!strcmp(str, DIFF_STR))     return DIFF;
    else {
        fprintf(stderr, "%s [%s] %s\n", "stringtoTYPE: cannot convert invalid "
                                        "string", str, "to TYPE");
        exit(EXIT_FAILURE);
    }
}

TYPE chartoTYPE(char c)
{
    switch (c) {
        case LPAREN:     return    PAREN;
        case RPAREN:     return    PAREN;
        case EXP_CHAR:   return    EXP;
        case LOG_CHAR:   return    LOG;
        case MOD_CHAR:   return    MOD;
        case INT_CHAR:   return    INT;
        case PROD_CHAR:  return    PROD;
        case QUOT_CHAR:  return    QUOT;
        case SUM_CHAR:   return    SUM;
        case DIFF_CHAR:  return    DIFF;
        default:
            fprintf(stderr, "%s [%c] %s\n", "chartoTYPE: cannot convert "
                                            "invalid character", c, "to TYPE");
            exit(EXIT_FAILURE);
    }
}

char TYPEtochar(TYPE type)
{
    switch (type) {
        case LITERAL:   return LIT_CHAR;
        case PAREN:     return PAREN_CHAR;
        case EXP:       return EXP_CHAR;
        case LOG:       return LOG_CHAR;
        case MOD:       return MOD_CHAR;
        case INT:       return INT_CHAR;
        case PROD:      return PROD_CHAR;
        case QUOT:      return QUOT_CHAR;
        case SUM:       return SUM_CHAR;
        case DIFF:      return DIFF_CHAR;
        default:
            fprintf(stderr, "%s\n", "TYPEtochar: cannot convert invalid TYPE "
                                    "to character");
            exit(EXIT_FAILURE);
    }
}

bool hasHigherPriorityThan(TYPE lhs, TYPE rhs)
{
    if (lhs == rhs) return false;

    switch (lhs) {
        case LITERAL:   return true;
        case PAREN:     return lhs < rhs;
        case EXP:       return (lhs < rhs) && !(rhs == LOG) ;
        case LOG:       return lhs < rhs;
        case MOD:       return (lhs < rhs) && !(rhs == INT) ;
        case INT:       return lhs < rhs;
        case PROD:      return (lhs < rhs) && !(rhs == QUOT);
        case QUOT:      return (lhs < rhs);
        case SUM:       return (lhs < rhs) && !(rhs == DIFF);
        case DIFF:      return (lhs < rhs);
        default:        return false;
    }
}

/****************************************************************************/
/*                                  ast.c                                   */
/****************************************************************************/

//#include "ast.h"

#include <stdlib.h>
#include <stdio.h>

#include <math.h>
#include <stdbool.h>

/****************************************************************************/

void label(const char *msg)
{
    static int count = 0;
    fprintf(stderr, "[%d]: %s\n", count++, msg);
}

/****************************************************************************/

struct AST_Node {
    AST_Node left;
    AST_Node right;
    TYPE type;
    double num;
};

AST_Node AST_new()
{
    AST_Node n = malloc(sizeof(*n));
    if (n == NULL) {
        perror("AST_new");
        exit(EXIT_FAILURE);
    }

    n->type = LITERAL;
    n->left = NULL;
    n->right = NULL;
    n->num = 0;

    return n;
}

void AST_free(AST_Node *n)
{
    if ((n == NULL) || (*n == NULL)) return;
    AST_Node t = *n;
    AST_free(&(t->left));
    AST_free(&(t->right));

    free(t);
    *n = NULL;
}

AST_Node AST_copy(AST_Node n)
{
    if (n == NULL) return NULL;
    AST_Node c = malloc(sizeof(*c));
    if (c == NULL) {
        perror("AST_copy");
        exit(EXIT_FAILURE);
    }

    c->type = n->type;
    c->num = n->num;
    c->left = AST_copy(n->left);
    c->right = AST_copy(n->right);

    return c;
}

AST_Node AST_settype(AST_Node n, TYPE type)
{
    if (n == NULL) return NULL;

    n->type = type;
    return n;
}

AST_Node AST_setright(AST_Node n, AST_Node r)
{
    if (n == NULL) return NULL;

    n->right = r;
    return n;
}

AST_Node AST_setleft(AST_Node n, AST_Node l)
{
    if (n == NULL) return NULL;

    n->left = l;
    return n;
}

AST_Node AST_setnum(AST_Node n, double num)
{
    if (n == NULL) return NULL;

    n->num = num;
    return n;
}

TYPE AST_gettype(AST_Node n)
{
    if (n == NULL) {
        fprintf(stderr, "%s\n", "AST_gettype: cannot extract type from NULL");
        exit(EXIT_FAILURE);
    } 
    return n->type;
}

AST_Node AST_getright(AST_Node n)
{
    if (n == NULL) {
        fprintf(stderr, "%s\n", "AST_getright: cannot extract right child "
                                "from NULL");
        exit(EXIT_FAILURE);
    } else if (n->type == LITERAL) {
        fprintf(stderr, "%s\n", "AST_getright: cannot extract right child "
                                "from [LITERAL] node");
        exit(EXIT_FAILURE);
    }
    return n->right;
}

AST_Node AST_getleft(AST_Node n)
{
    if (n == NULL) {
        fprintf(stderr, "%s\n", "AST_getleft: cannot extract left child "
                                "from NULL");
        exit(EXIT_FAILURE);
    } else if (n->type == LITERAL) {
        fprintf(stderr, "%s\n", "AST_getleft: cannot extract left child "
                                "from [LITERAL] node");
        exit(EXIT_FAILURE);
    }
    return n->left;
}

double AST_getnum(AST_Node n)
{
    if (n == NULL) {
        fprintf(stderr, "%s\n", "AST_getnum: cannot extract number from "
                                "NULL");
        exit(EXIT_FAILURE);
    } else if (n->type != LITERAL) {
        fprintf(stderr, "%s\n", "AST_getnum: cannot extract number from "
                                "non-literal node");
        exit(EXIT_FAILURE);
    }
    return n->num;
}

bool AST_wellformed(AST_Node n)
{
    if (n == NULL) return true;

    bool left;
    bool right;

    switch (n->type) {
        case LITERAL: return true;
        case PAREN:
            return (n->right == NULL) ? false : AST_wellformed(n->right);
        default:
            left = (n->left == NULL) ? false : AST_wellformed(n->left);
            right = (n->right == NULL) ? false : AST_wellformed(n->right);
            return left && right;
    }
}

bool AST_caninsertnum(AST_Node n)
{
    if (n == NULL) return true;

        if (n->type == LITERAL) return false;
        else return AST_caninsertnum(n->right);
}

AST_Node AST_rightmost(AST_Node root)
{
    if ((root == NULL) || (root->right == NULL)) return root;
    else return AST_rightmost(root->right);
}

AST_Node AST_insert(AST_Node n, AST_Node root)
{
    if (n == NULL) return root;
    if (root == NULL) return n;

    if ((n->type == LITERAL) || (n->type == PAREN)) {
        return AST_insertnum(n, root);
    } else return AST_insertoperator(n, root);
}

AST_Node AST_insertnum(AST_Node n, AST_Node root)
{
    if (n == NULL) return root;
    if (root == NULL) return n;

    if (root->type == LITERAL) {
        fprintf(stderr, "%s [%0.15f] %s\n", "AST_insertnum: cannot insert "
                                            "literal", n->num, "into filled "
                                            "tree");
        exit(EXIT_FAILURE);
    }
    if (root->right == NULL) {
        root->right = n;
        return root;
    } else {
        (void) AST_insertnum(n, root->right);
        return root; 
    }
}

AST_Node AST_insertoperator(AST_Node n, AST_Node root)
{
    if (n == NULL) return root;
    if (root == NULL) return n;

    // If the node to insert binds tighter than the node we are inspecting,
    // check the next node down
    if (bindsTighterThan(n, root)) {
        // If our new node also binds tighter than the child node, then we need
        // to go deeper
        if (bindsTighterThan(n, root->right)) {
            (void) AST_insertoperator(n, root->right);
            return root;
        }
        // If new node is tighter than parent and looser than child, insert
        // new node in between them
        else {
            n->left = root->right;
            root->right = n;
            return root;
        }
    }
    // The new node is not tighter than the root
    else {
        // If the new node binds tighter than the root's child too, problems
        // unless the root is a paren group
        if (bindsTighterThan(n, root->right) && (root->type != PAREN)) {
            fprintf(stderr, "%s: [%s] %s [%s and %s]\n",
                            "AST_insertoperator: malformed tree. Operator "
                            "precedence violated", TYPEtostring(n->type),
                            "does not belong between",
                            TYPEtostring(root->type),
                            TYPEtostring(root->right->type));
            exit(EXIT_FAILURE);
        }
        // If the new node is looser than both, then new node is new root
        else {
            n->left = root;
            return n;
        }
    }
    return root;
}

bool bindsTighterThan(AST_Node lhs, AST_Node rhs)
{
    if (lhs == NULL) return true;
    if (rhs == NULL) return false;
    return hasHigherPriorityThan(lhs->type, rhs->type);
}

void AST_print(AST_Node root)
{
    if (root == NULL) return;
    switch (root->type) {
        case LITERAL:
            fprintf(stdout, "%.15g ", root->num);
            break;
        case PAREN:
            fprintf(stdout, "( ");
            AST_print(root->right);
            fprintf(stdout, ") ");
            break;
        case EXP:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", EXP_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case LOG:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", LOG_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case MOD:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", MOD_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case INT:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", INT_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case PROD:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", PROD_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case QUOT:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", QUOT_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case SUM:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", SUM_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
        case DIFF:
            if (VERBOSE) fprintf(stdout, "( ");
            AST_print(root->left);
            fprintf(stdout, "%c ", DIFF_CHAR);
            AST_print(root->right);
            if (VERBOSE) fprintf(stdout, ") ");
            break;
    }
}

double AST_eval(AST_Node root)
{
    if (root == NULL) {
        fprintf(stderr, "%s\n", "AST_eval: malformed tree - cannot evaluate "
                                "incomplete tree");
        exit(EXIT_FAILURE);
    }

    switch (root->type) {
        case LITERAL: return root->num;
        case PAREN: return AST_eval(root->right);
        case EXP: return pow(AST_eval(root->left), AST_eval(root->right));
        case LOG: return log(AST_eval(root->left)) /
                         log(AST_eval(root->right));
        case MOD: return fmod(AST_eval(root->left), AST_eval(root->right));
        case INT: return (int) (AST_eval(root->left) / AST_eval(root->right));
        case PROD: return AST_eval(root->left) * AST_eval(root->right);
        case QUOT: return AST_eval(root->left) / AST_eval(root->right);
        case SUM: return AST_eval(root->left) + AST_eval(root->right);
        case DIFF: return AST_eval(root->left) - AST_eval(root->right);
    }
    // Compiler dummy
    return 0;
}

/****************************************************************************/
/*                                tokenize.c                                */
/****************************************************************************/

//#include "tokenize.h"
//#include "operator.h"

#include <string.h>
#include <ctype.h>

#include <stdio.h>
#include <stdlib.h>

/****************************************************************************/

static char matchDelim(char c)
{
    for (const char *delim_ = delim; *delim_ != NULLCHAR; delim_++) {
        if (c == *delim_) return *delim_;
    }
    return NULLCHAR;
}

/****************************************************************************/

Token next_token(char **str)
{
    Token t = {'\0', NULL};
    char *s = *str;

    if ((str == NULL) || (*str == NULL) || (**str == NULLCHAR)) {
        return t;
    }

    // Eat whitespace
    while (isspace(*s)) ++s;

    // If we match a delimiter, we're done
    if (matchDelim(*s) != NULLCHAR) {
        t.n = AST_new();
        AST_settype(t.n, chartoTYPE(*s));
        t.c = *s;

        *str = ++s;
        return t;
    }
    char *jump = NULL;
    double literal = strtod(s, &jump);

    // If we matched a number, we're done
    if (s != jump) {
        t.n = AST_new();
        AST_settype(t.n, LITERAL);
        AST_setnum(t.n, literal);
        *str = jump;
        return t;
    }

    // If we don't know what to do with the string, print an error
    fprintf(stderr, "%s: [%s]\n", "next_token: invalid expression",
                                   s);
    return t;
}

/****************************************************************************/
/*                                 explist.c                                */
/****************************************************************************/

//#include "explist.h"

#include <stdlib.h>
#include <stdio.h>

struct Explist {
    AST_Node head;
    struct Explist *rest;
};

Explist Explist_new()
{
    Explist e = malloc(sizeof(*e));
    if (e == NULL) {
        perror("Explist_new");
        exit(EXIT_FAILURE);
    }

    e->head = NULL;
    e->rest = NULL;

    return e;
}

void Explist_free(Explist *e)
{
    while (*e != NULL) *e = Explist_pop(*e);
}

void Explist_print(Explist e)
{
    if (e == NULL) {
        fputc('\n', stdout);
        return;
    }
    AST_print(e->head);
    Explist_print(e->rest);
}

Explist Explist_prepend(Explist head, Explist rest)
{
    if (head == NULL) return rest;
    head->rest = rest;
    return head;
}

Explist Explist_pop(Explist e)
{
    if (e == NULL) return NULL;
    Explist t = e->rest;
    AST_free(&(e->head));
    free(e);
    return t;
}

Explist Explist_add(AST_Node n, Explist e)
{
    if (n == NULL) {
        return e;
    }
    if (e == NULL) {
        e = Explist_new();
        if (e == NULL) {
            perror("Explist_add");
            exit(EXIT_FAILURE);
        }
    }

    e->head = AST_insert(n, e->head);
    return e;
}

AST_Node Explist_toAST(Explist e)
{
    if (e == NULL) return NULL;
    return AST_copy(e->head);
}

Explist Explist_collapse(Explist e)
{
    if (e == NULL) return e;
    if (e->rest == NULL) return e;

    Explist prev = e->rest;
    AST_Node paren = AST_rightmost(prev->head);
    AST_Node this = e->head;

    AST_setright(paren, AST_copy(this));

    return Explist_pop(e);
}

bool Explist_singleton(Explist e)
{
    if (e == NULL) return false;
    if (e->rest == NULL) return true;
    return false;
}

/****************************************************************************/
/*                                 parse.h                                  */
/****************************************************************************/

#include <stdlib.h>
#include <stdio.h>

//#include "parse.h"
//#include "operator.h"

//#include "ast.h"

AST_Node parse(char *l)
{
    Explist e = Explist_new();
    Explist e_;
    Token t;
    Token last = {'\0', NULL};
    AST_Node root = NULL;

    bool done = false;

    while (!done) {
        t = next_token(&l);

        if (t.n == NULL) {
            done = true;
            continue;
        }

        TYPE type = AST_gettype(t.n);

        // Closing paren followed by opening paren or literal
        if ((last.c == RPAREN) && ((type == LITERAL) || (t.c == LPAREN))) {
            AST_Node mul = AST_settype(AST_new(), PROD);
            e = Explist_add(mul, e);
        }
        // Literal followed by opening paren
        else if ((last.n != NULL) &&
                 (AST_gettype(last.n) == LITERAL) && (t.c == LPAREN)) {
            AST_Node mul = AST_settype(AST_new(), PROD);
            e = Explist_add(mul, e);
        }

        if (t.c == LPAREN) {
            e = Explist_add(t.n, e);
            e = Explist_prepend(Explist_new(), e);
    
            AST_free(&last.n);
            last.c = t.c;
            last.n = AST_copy(t.n);
            continue;
        }
        if (t.c == RPAREN) {
            e_ = Explist_collapse(e);
            if (e == e_) {
                fprintf(stderr, "%s\n", "Unexpected right parenthesis");
                Explist_free(&e_);
                AST_free(&t.n);
                return NULL;
            }
            e= e_;
            
            AST_free(&t.n);
            AST_free(&last.n);
            last.c = t.c;
            last.n = AST_copy(t.n);
            continue;
        }

        e = Explist_add(t.n, e);
        AST_free(&last.n);
        last.c = t.c;
        last.n = AST_copy(t.n);
    }

    if (!Explist_singleton(e)) fprintf(stderr, "%s\n", "Unclosed parenthesis");

    root = Explist_toAST(e);
    Explist_free(&e);
    AST_free(&last.n);
    return root;
}

