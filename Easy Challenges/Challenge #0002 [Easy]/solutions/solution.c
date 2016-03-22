/************************
Name:         Rodrigo Vaz
File:         solution.c
Description:  Y -> Delta resistor transform
Last Update:  March 21, 2016 8:40pm
*************************/

#include <stdio.h>

int main()
{
    int choice;
    int r1, r2, r3, ra, rb, rc;

    printf("Enter 0 for Y to Delta or 1 for Delta to Y!\n");
    scanf("%d", &choice);
    
    if(choice == 0)
    {
        printf("Enter value of R1, R2 and R3:\n");
        scanf("%d %d %d", &r1, &r2, &r3);
        
        ra = (r1*r2 + r2*r3 + r3*r1)/r1;
        rb = (r1*r2 + r2*r3 + r3*r1)/r2;
        rc = (r1*r2 + r2*r3 + r3*r1)/r3;
    }
    else if(choice == 1)
    {
        printf("Enter value of Ra, Rb and Rc:\n");
        scanf("%d %d %d", &ra, &rb, &rc);
        
        r1 = (rb*rc)/(ra + rb + rc);
        r2 = (ra*rc)/(ra + rb + rc);
        r3 = (ra*rb)/(ra + rb + rc);
    }

    printf("The equivalent of a Y network of resistors R1 = %d, R2 = %d, R3 = %d", r1, r2, r3);
    printf(" is a delta network of resistors Ra = %d, Rb = %d, Rc = %d", ra, rb, rc);

    return 0;
}
