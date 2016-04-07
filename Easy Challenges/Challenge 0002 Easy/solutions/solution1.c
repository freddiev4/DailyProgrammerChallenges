/*ask the user his name age and reddit username.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{float n,b,times,i;
 float total,a;
 int d,c;
        printf("What is the principle amount");
        scanf("%f",&a);
        printf("Type the interest rate and on how many months\nInterest Rate:");
        scanf("%f",&b);
        printf("\nNo. of Months:");
        scanf("%d",&c);
        printf("After how many months do you want to calculate the total amount");
        scanf("%d",&d);
        times=d/c;
    printf("What do you want to calculate?\n 1.Simple Interest\n 2.Compound Interest");
    scanf("%f",&n);
    if(n==1){

        total= a+(b/100)*a*times;

    }
    else if(n==2){
        total=a;
        for(i=1;i<=times;i++){
            total=total+(total*(b/100));
        }
    }
    else{
        printf("Invalid Entry");
    }

    printf("The amount you have to pay after %d months is %f",d,total);

    return 0;
}
