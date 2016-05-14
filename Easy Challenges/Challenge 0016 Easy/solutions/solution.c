/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Write a program that takes two strings and removes from the first
 * 		string any character that appears in the second string. For instance,
 * 		if the first string is "Daily Programmer" and the second string is
 * 		"aeiou ", the result will be "DlyPrgrmmr". Notice that the second
 * 		string has a [space]; so the space in the first string "Daily Programmer"
 * 		has been removed.
 *
 * Note		Linked list based implementation.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

/* List node data structure */
typedef struct ll_node {
	int data;
	struct ll_node *next;
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
 * @brief	Adds a new node at the end of the list
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
 * @brief	Checks if a value is present in the list or not
 */
bool is_present(node *chk, int data)
{
	node *tmp = chk;
	while (tmp)
	{
		if (tmp->data == data)
			return true;
		tmp = tmp->next;
	}
	return false;
}

/*
 * @brief	Selectively removes characters from src list that are present
 * 		in chk list
 */
void selective_remove(node **src, node *chk)
{
	node *curr = *src;
	node *tmp;
	while (curr && curr->next)
	{
		/* If the list head matches with elements of 2nd list */
		if (true == is_present(chk, curr->data))
		{
			tmp = curr;
			curr = tmp->next;
			free(tmp);
			*src = curr;
		}
		/* If match is found elsewhere in the list */
		if (true == is_present(chk, curr->next->data))
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		/* No match found */
		else
			curr = curr->next;
	}
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	char *str_src = "Daily Programmer";
	char *str_chk = "ae iou";
	node *src = NULL;
	node *chk = NULL;

	/* Populate the two lists */
	while (*str_src != '\0')
	{
		src = add_node(src, *str_src);
		str_src++;
	}
	while (*str_chk != '\0')
	{
		chk = add_node(chk, *str_chk);
		str_chk++;
	}

	/* Print the state of the two lists before processing */
	printf("Before processing:\n");
	printf("\tFirst string:\t");
	print_list(src);
	printf("\n");
	printf("\tSecond string:\t");
	print_list(chk);
	printf("\n\n");

	/* Selectively remove characters of 2nd list from the first one */
	selective_remove(&src, chk);

	/* Print the state of the two lists */
	printf("After processing:\n");
	printf("\tFirst string:\t");
	print_list(src);
	printf("\n");
	printf("\tSecond string:\t");
	print_list(chk);
	printf("\n\n");

	return 0;
}
