/*Question: 
Write a C program that takes a series of integers as input from the user
(terminate the input by entering 0)
and calculates the sum and average of these numbers.
Use a loop for input, and another loop for calculation.
Ensure that the program works for any number of input values.*/

#include<stdio.h>

int main()
{
    int num , a = 0;
    double b = 0;

    do
    {
        printf("Enter A Number :    ");
        scanf("%d",&num);

        if(num!=0)
        {
            a = a + num;
            b = b + 1;
        }
        else
        {
            break;
        }

    }
    while(num!=0);

    printf("The Sum :   %d",a);
    printf("\nThe Average :       %lf",a/b);

    return 0;
}