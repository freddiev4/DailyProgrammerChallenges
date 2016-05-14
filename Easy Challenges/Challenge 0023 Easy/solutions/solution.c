/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 * Description	Given a list, return two halves as different lists. If the list
 * 		has odd number of elements, the middle item can go to any of the
 * 		lists
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN	13

/* List node data structure */
struct l_node {
	int data;
	struct l_node *next;
};

/*
 * @brief	Prints the state of the list
 */
void print_list(struct l_node *head)
{
	struct l_node *tmp = head;
	while (tmp != NULL)
	{
		printf("%d ", tmp->data);
		tmp = tmp->next;
	}
}

/*
 * @brief	Adds a new node at the end of list
 */
struct l_node *insert_node(struct l_node *head, int data)
{
	struct l_node *tmp;
	if (head == NULL)
	{
		head = malloc(sizeof(struct l_node));
		if (head == NULL)
			exit(1);
		head->data = data;
		head->next = NULL;
	}
	else
	{
		tmp = head;
		/* Find the last element in the list */
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = malloc(sizeof(struct l_node));
		if (tmp->next == NULL)
			exit(1);
		tmp = tmp->next;
		tmp->data = data;
		tmp->next = NULL;
	}
	return head;
}

/*
 * @brief	Splits the list into two halves. The two lists will have
 * 		equal # of element if the original list lenght is even.
 * 		Else, the first half will have one more element than the
 * 		second
 */
void split_list(struct l_node *head, struct l_node **first, struct l_node **second)
{
	struct l_node *f_ptr = head;	/* Fast pointer */
	struct l_node *s_ptr = head;	/* Slow pointer */

	/* Check if list head is NOT NULL */
	if (head == NULL)
		return;

	while (f_ptr && f_ptr->next && f_ptr->next->next)
	{
		s_ptr = s_ptr->next;
		f_ptr = f_ptr->next->next;
	}
	/* Assign head pointer for 2nd half */
	*second = s_ptr->next;
	/* Break the list into 2 halves */
	s_ptr->next = NULL;
	/* Assign head pointer for the first half */
	*first = head;
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	struct l_node *head = NULL;		/* List head */
	struct l_node *first = NULL;		/* Pointer to head of first half */
	struct l_node *second = NULL;		/* Pointer to head of 2nd half */
	int i;					/* Loop index */

	/* Populate the list */
	for (i = 0; i < LEN; i++)
		head = insert_node(head, rand() % 1234);

	/* Print the state of the list */
	printf("State of the list is as below -\n\n");
	print_list(head);
	printf("\n\n");

	/* Split the list into first & second halves */
	split_list(head, &first, &second);

	/* Print first half of the list */
	printf("First half of the list -\t");
	print_list(first);
	printf("\n\n");

	/* Print the second half of the list */
	printf("Second half of the list -\t");
	print_list(second);
	printf("\n\n");

	return 0;
}
