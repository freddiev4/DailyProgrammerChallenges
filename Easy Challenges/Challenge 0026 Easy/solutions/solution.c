/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Given a list with consecutive duplicates, remove those
 * 		duplicate characters and put them in a separate list.
 * 		Linked list based implementation for efficient storage space
 * 		utilization.
 *
 * Note		Spaces need to be replaced with connecting characters (such as
 * 		_,*,/,\,& etc) in the input string for proper functioning of this
 * 		code.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define	MAX_STRLEN	256

/* List node data structure */
typedef struct l_node {
	int data;
	struct l_node *next;
} node;

/*
 * @brief	Prints the state of the list
 */
void print_list(node *head)
{
	node *tmp = head;
	while (tmp)
	{
		printf("%c", tmp->data);
		tmp = tmp->next;
	}
}

/*
 * @brief	Adds a node at the end of the list
 */
node *add_node(node *head, int data)
{
	node *tmp;
	if (head == NULL)
	{
		head = malloc(sizeof(node));
		assert(head != NULL);
		head->data = data;
		head->next = NULL;
	}
	else
	{
		tmp = head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = malloc(sizeof(node));
		assert(tmp->next != NULL);
		tmp = tmp->next;
		tmp->data = data;
		tmp->next = NULL;
	}
	return head;
}

/*
 * @brief	Removes duplicates from the list & puts those chars into a
 * 		different list
 */
void remove_duplicates(node *head, node **aux)
{
	node *curr = head;
	node *tmp;
	while (curr->next != NULL)
	{
		if (curr->data == curr->next->data)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			*aux = add_node(*aux, tmp->data);
			free(tmp);
		}
		else
			curr = curr->next;
	}
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	node *head = NULL;
	node *aux = NULL;
	char str[MAX_STRLEN];
	int len = 0;
	unsigned short i = 0;

	/* Enter the string */
	printf("Input string: ");
	scanf("%s", str);
	len = strlen(str);

	/* Populate the list */
	for (; i < len; i++)
		head = add_node(head, str[i]);

	/* Remove duplicates & put them in a separate list */
	remove_duplicates(head, &aux);

	/* Print the two lists after removing duplicates */
	print_list(head);
	printf(" ");
	print_list(aux);
	printf("\n");

	return 0;
}
