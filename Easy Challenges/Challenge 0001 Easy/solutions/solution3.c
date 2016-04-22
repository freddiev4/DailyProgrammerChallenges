/*ask the user his name age and reddit username.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{char name[15],uname[15];
 int age;
    printf("What is you name ?");
    scanf("%s",&name[0]);
    printf("What is your age ?");
    scanf("%d",&age);
    printf("What is your reddit username ?");
    scanf("%s",&uname[0]);

    printf("Your name is %s, you are %d years old, and your username is %s",&name[0],age,&uname[0]);

    return 0;
}
