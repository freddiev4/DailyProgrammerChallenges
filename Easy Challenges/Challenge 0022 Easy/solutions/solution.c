/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	Write a program that will compare two lists, and appeand any
 * 		elements from the second list that doesn't exist in the first.
 * 		Input list 1: ['a', 'b', 'c', 1, 4]
 * 		Input list 2: ['a', 'x', 34, '4']
 *
 * 		Output list : ['a', 'b', 'c', 1, 4, 'x', 34, '4']
 *
 * Note		Hash table based implementation. For the uthash API, please
 * 		refer to http://bit.ly/27cjhkg
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "uthash.h"

/* Data structure for hash table entry */
struct my_struct {
	int id;
	unsigned short val;
	UT_hash_handle hh;
};

struct my_struct *users = NULL;

/*
 * @brief	Adds an entry to the hash-table only if no element is
 * 		present with the same id. Else, existing entry value is
 * 		modified
 */
void add_element(int id, int value)
{
	struct my_struct *s;
	/* Check if the key-value pair is already in the hash table */
	HASH_FIND_INT(users, &id, s);
	if (s == NULL)
	{
		s = (struct my_struct*)malloc(sizeof(struct my_struct));
		assert(s != NULL);
		s->id = id;
		HASH_ADD_INT(users, id, s);
	}
	s->val = value;
}

/*
 * @brief	Free all the allocated memory
 */
void free_all(void)
{
	struct my_struct *curr, *tmp;
	HASH_ITER(hh, users, curr, tmp) {
		HASH_DEL(users, curr);		/* delete it (users advances to next) */
		free(curr);
	}
}

/*
 * @brief	Prints the list of keys present in the hash table
 */
void print_list(void)
{
	struct my_struct *s;
	for (s = users; s != NULL; s = (struct my_struct *)s->hh.next) {
		if (s->id < 48)	/* Printing ASCII values instead of characters */
			printf("%d ", s->id);
		else
			printf("%c ", s->id);
	}
	printf("\n\n");
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	int arr1[] = {'a', 'b', 'c', 1, 4};		/* List 1 */
	int arr2[] = {'a', 'x', 34, '4'};		/* List 2 */
	int i = 0;					/* Loop index */
	int l1 = sizeof(arr1) / sizeof(arr1[0]);	/* Length of list 1 */
	int l2 = sizeof(arr2) / sizeof(arr2[0]);	/* Length of list 2 */

	/* Populate the hash table */
	/* We're pushing 1 for value for all key-value pairs in the hash table */
	for (i = 0; i < l1; i++)
		add_element(arr1[i], 1);
	for (i = 0; i < l2; i++)
		add_element(arr2[i], 1);

	/* Print the union of the two lists */
	print_list();

	/* Finally, free any structures */
	free_all();

	return 0;
}
