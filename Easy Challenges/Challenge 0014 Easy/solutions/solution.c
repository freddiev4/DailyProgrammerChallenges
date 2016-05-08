/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Given a list of elements and a block of size k, return
 * 		the list of elements with every block of k elements reversed
 * 		starting from the beginning of the list
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define LEN	15
#define DIV	4

/* Structure for list node */
typedef struct _L_NODE_ {
	int data;
	struct _L_NODE_ *next;
} l_node;

/*
 * @brief	Prints the state of the list
 */
void print_list(l_node *head)
{
	int counter = 0;
	l_node *tmp = head;
	while (tmp)
	{
		printf("\tNode:\t%d,\tValue:\t%d\n", ++counter, tmp->data);
		tmp = tmp->next;
	}
	printf("\n\n");
}

/*
 * @brief	Pushes nodes at the end of the list
 */
l_node *push_at_end(l_node *head, int data)
{
	l_node *tmp;
	if (head == NULL)
	{
		head = (l_node *)malloc(sizeof(l_node));
		assert(head != NULL);
		head->data = data;
		head->next = NULL;
	}
	else
	{
		tmp = head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = (l_node *)malloc(sizeof(l_node));
		assert(tmp->next != NULL);
		tmp = tmp->next;
		tmp->data = data;
		tmp->next = NULL;
	}
	return head;
}

/*
 * @brief	Reverse the list in groups of DIV
 */
l_node *reverse_in_group(l_node *head, int d)
{
	l_node *prev = NULL;
	l_node *curr = head;
	l_node *next;
	int counter = 0;

	/* Reverse the first part of the list */
	while (curr && counter < d)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		counter++;
	}

	/* Now, take care of the second part of the list as well */
	if (next)
		head->next = reverse_in_group(next, d);

	/* Return the new head node */
	return (prev);
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	l_node *head = NULL;
	int i = 0;

	/* Populate the list */
	for (; i < LEN; i++)
		head = push_at_end(head, rand() % 1234);

	/* Print the state of the list */
	printf("Before: State of the list -\n\n");
	print_list(head);

	/* Reverse the list in groups */
	head = reverse_in_group(head, DIV);

	/* Print the state of the list */
	printf("After: State of the list -\n\n");
	print_list(head);

	return 0;
}
