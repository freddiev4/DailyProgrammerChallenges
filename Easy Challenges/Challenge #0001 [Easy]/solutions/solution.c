// Solution by https://github.com/mateoKaradza

#include <stdio.h>
#include <stdlib.h>

typedef struct User{
	unsigned int age;
	char name[50];
	char username[50];
}User;

int main(void) {

	User user;

	printf("Enter your name, age and reddit username: ");
	scanf("%s %d %s", user.name, &user.age, user.username);

	FILE* file = fopen("info.txt", "w");
	if (!file) {
		perror("Unable to open the file");
		exit(EXIT_FAILURE); /* so that you don't try to use the null ptr */
	}

	fprintf(file, "%s %d %s", user.name, user.age, user.username);

	fclose(file);

	return 0;   // return 1 would indicate an error wouldn't it? 
}
