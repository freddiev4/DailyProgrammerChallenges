/*
 * Reddit: AssailantLF
 * Gitlab/hub: AssailantLF
 * Email: AssailantLF@gmail.com
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SAVENAME "daily219todolist.txt"

typedef enum { CATEGORY, NAME } search_type;
typedef enum { false, true } bool;

struct node {
    char *todo;
    char *category;
    struct node *next;
    struct node *prev;
};
struct node *first = NULL; /* pointer to first node in linked-list */
struct node *last = NULL;  /* pointer to last node */

void print_help(void);
/* Reads input from stream into a dynamically sized, malloc'd string, whose last
 * new line is replaced by a null terminator.  Returns a pointer to the string. */
char* read_input(FILE *stream);

/* Asks for user input, and then searches the todo list for any strings which
 * partially match that input. Returns a pointer to the first matching task, or
 * NULL if none match. The type parameter can be CATEGORY or NAME and specifies
 * whether or not to search for tasks by name or by category. */
struct node *search(search_type type);

/* Creates a new task. If the input parameter is true, the task's information
 * will be filled out by the user, otherwise it will be specified by the name
 * and category parameters. */
void insert_task(bool input, const char *name, const char *category);

void modify_task(void);
void change_category(void);
void remove_task(void);
void view_list(void);
void read_from_file(void);
void write_to_file(void);
void free_list(void);
void terminate(const char *message, int status);

int main(void)
{
    char code;

    printf("        Welcome to your to-do list!\n");
    print_help();
    read_from_file();
    for (;;)
    {
        printf("\nEnter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ; /* skip to EOL */
        switch (code)
        {
            case 'i': insert_task(true, "", "");
                      break;
            case 'm': modify_task();
                      break;
            case 'c': change_category();
                      break;
            case 'r': remove_task();
                      break;
            case 'v': view_list();
                      break;
            case 'q': terminate("Have a good day!\n", EXIT_SUCCESS);
                      break;
            case 'h': print_help();
                      break;
            default: printf("Invalid code\n");
        }
    }
}

void print_help(void)
{
    printf("\n             Operation Codes:\n");
    printf(" i -  insert   | r - remove | m - modify\n");
    printf(" c - (change   | v -  view  | q -  quit\n");
    printf("     category) | h -  help\n");
}

char* read_input(FILE *stream)
{
    int i = 0, max_len = 80;
    char c, *in = malloc(max_len + 1);

    if (in == NULL)
        terminate("Memory allocation error\n", EXIT_FAILURE);
    while ((c = fgetc(stream)) != '\n' && c != EOF)
    {
        if (i >= max_len)
        {
            in = realloc(in, i + max_len + 1);
            if (in == NULL)
                terminate("Input too long! Memory error!\n", EXIT_FAILURE);
        }
        in[i++] = c;
    }
    in[i] = '\0';
    return in;
}

struct node *search(search_type type)
{
    struct node *p;
    char *needle, *found = NULL;

    needle = read_input(stdin);
    if (strlen(needle) == 0)
        return NULL;
    for (p = first; p != NULL; p = p->next)
    {
        found = strstr(type == CATEGORY ? p->category : p->todo, needle);
        if (found != NULL)
        {
            free(needle);
            return p;
        }
    }
    free(needle);
    return NULL;
}

void insert_task(bool input, const char *name, const char *category)
{
    struct node *new = malloc(sizeof(struct node));
    static bool first_time = true;

    if (new == NULL)
        terminate("Memory allocation error\n", EXIT_FAILURE);

    if (input == true)
    {
        printf("Enter task to add: ");
        new->todo = read_input(stdin);
        switch (first_time)
        {
            case true: printf("Enter task's category ");
                    printf("(leave blank for no category): ");
                    first_time = false;
                    break;
            case false: printf("Enter task's category: ");
        }
        new->category = read_input(stdin);
        printf("Task added\n");
    }
    else
    {
        new->todo = malloc(strlen(name) + 1);
        strcpy(new->todo, name);
        new->category = malloc(strlen(category) + 1);
        strcpy(new->category, category);
    }
    new->next = NULL;
    new->prev = last;
    if (last != NULL)
        last->next = new;
    else
        first = new;
    last = new;
}

void modify_task(void)
{
    char code;
    struct node *p;

    printf("Enter a task to modify: ");
    if ((p = search(NAME)) != NULL)
    {
        printf("Would you like to modify (n)ame or (c)ategory?: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ; /* skip to EOL */
        if (code == 'n')
        {
            printf("Enter a name: ");
            p->todo = read_input(stdin);
        }
        else if (code == 'c')
        {
            printf("Enter a category: ");
            p->category = read_input(stdin);
        }
        else
        {
            printf("Please enter a valid character\n");
            return;
        }
        printf("Task modified\n");
    }
    else
        printf("Task not found\n");
}

void change_category(void)
{
    struct node *p, *c;
    char *new_category;
    char *old_category;

    printf("Enter a category to change: ");
    if ((c = search(CATEGORY)) != NULL)
    {
        old_category = malloc(strlen(c->category) + 1);
        strcpy(old_category, c->category);
        printf("Enter a new category name: ");
        new_category = read_input(stdin);
        for (p = first; p != NULL; p = p->next)
            if (strcmp(old_category, p->category) == 0)
            {
                p->category = realloc(p->category, strlen(new_category) + 1);
                strcpy(p->category, new_category);
            }
        free(old_category);
        free(new_category);
        printf("Category changed\n");
    }
    else
        printf("Category not found\n");
}

void remove_task(void)
{
    struct node *p;

    printf("Enter a task to remove: ");
    if ((p = search(NAME)) != NULL)
    {
        if (p == first)
            first = p->next;
        else
            p->prev->next = p->next;
        if (p == last)
            last = p->prev;
        else
            p->next->prev = p->prev;
        free(p->todo);
        free(p->category);
        free(p);
        printf("Task deleted.\n");
        return;
    }
    else
        printf("Task not found\n");
}

void view_list(void)
{
    char code;
    struct node *p, *c;

    if (first == NULL)
    {
        printf("Nothing to do, good job!\n");
        return;
    }

    printf("View by (a)ll or by (c)ategory?: ");
    scanf(" %c", &code);
    while (getchar() != '\n')
        ; /* skip to EOL */
    if (code == 'a')
    {
        for (p = first; p != NULL; p = p->next)
            printf(" * %s\n", p->todo);
    }
    else if (code == 'c')
    {
        printf("Enter a category: ");
        if ((c = search(CATEGORY)) != NULL)
        {
            for (p = first; p != NULL; p = p->next)
                if (strcmp(c->category, p->category) == 0)
                    printf(" * %s\n", p->todo);
        }
        else
            printf("Category not found\n");
    }
    else
        printf("Please enter a valid character\n");
}

void read_from_file(void)
{
    char *name, *category;
    FILE *list = fopen(SAVENAME, "r");
    name = category = NULL;

    if (list == NULL)
        return;
    for(;;)
    {
        name = read_input(list);
        category = read_input(list);
        if (feof(list))
            break;
        insert_task(0, name, category);
        free(name);
        free(category);
    }
    fclose(list);
    free(name);
    free(category);
}

void write_to_file(void)
{
    struct node *p;
    FILE *list;

    remove(SAVENAME);
    list = fopen(SAVENAME, "w");
    for (p = first; p != NULL; p = p->next)
    {
        fputs(p->todo, list);
        fputc('\n', list);
        fputs(p->category, list);
        fputc('\n', list);
    }
    fclose(list);
}

void free_list(void)
{
    struct node *p, *prev = NULL;

    for (p = first; p != NULL; p = p->next)
    {
        if (prev != NULL)
        {
            free(p->prev->todo);
            free(p->prev->category);
            free(p->prev);
        }
        prev = p;
    }
    if (prev != NULL)
        free(prev);
}

void terminate(const char *message, int status)
{
    printf("%s\n", message);
    write_to_file();
    free_list();
    exit(status);
}
