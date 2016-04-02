/*
 * Reddit: AssailantLF
 * Gitlab/hub: AssailantLF
 * Email: AssailantLF@gmail.com
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terminate(const char *message, int status);
void read_input(char **str); /* reads stdin into str */
void insert_task();
void remove_task();
void view_list();

struct node {
    char *todo;
    struct node *next;
};
struct node *first = NULL; /* pointer to first node in linked-list */
struct node *last = NULL;  /* pointer to last node */

int main(void)
{
    char code;

    printf("          Welcome to your to-do list!\n\n");
    printf("                Operation Codes:\n");
    printf(" i - insert | r - remove | v - view | q - quit\n");
    for (;;)
    {
        printf("\nEnter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ; /* skip to EOL */
        switch (code) {
            case 'i': insert_task();
                      break;
            case 'r': remove_task();
                      break;
            case 'v': view_list();
                      break;
            case 'q': terminate("Have a good day!\n", EXIT_SUCCESS);
            default: printf("Invalid code\n");
        }
    }
}

void terminate(const char *message, int status)
{
    printf("%s\n", message);
    exit(status);
}

void read_input(char **str)
{
    int i = 0, max_len = 80;
    char c, *in = malloc(max_len + 1);
    if (in == NULL)
        terminate("Memory allocation error\n", EXIT_FAILURE);
    while ((c = getchar()) != '\n' && c != EOF) {
        if (i > max_len) {
            in = realloc(in, i + max_len);
            if (in == NULL)
                terminate("Input too long! Memory error!\n", EXIT_FAILURE);
        }
        in[i++] = c;
    }
    in[i] = '\0';
    *str = in;
}

void insert_task()
{
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL)
        terminate("Memory allocation error\n", EXIT_FAILURE);

    printf("Enter task to add: ");
    read_input(&new->todo);
    new->next = NULL;
    if (last == NULL)
        first = new;
    else
        last->next = new;
    last = new;
}

void remove_task()
{
    struct node *p, *prev = NULL;
    char *needle, *found = NULL;
    printf("Enter a task to remove: ");
    read_input(&needle);
    for (p = first; p != NULL; p = p->next) {
        found = strstr(p->todo, needle);
        if (found != NULL) {
            if (prev == NULL)
                first = p->next;
            else
                prev->next = p->next;
            free(p);
            printf("Task deleted.\n");
            return;
        }
        prev = p;
    }
    printf("Task not found\n");
}

void view_list()
{
    struct node *p;
    if (first == NULL)
        printf("Nothing to do, good job!\n");
    for (p = first; p != NULL; p = p->next)
        printf(" * %s\n", p->todo);
}
