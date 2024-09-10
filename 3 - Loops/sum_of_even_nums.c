/*Question:
Write a C program that takes a positive integer as input from the user 
and prints the sum of all the even numbers from 1 to that integer (inclusive).
Use a loop and conditionals to calculate and print the sum*/
#include<stdio.h>

int main()
{
    int num;
    int sum = 0;
    printf("Enter Positive Integer :        ");
    scanf("%d",&num);

    if(num < 0)
    {
    printf("Please Enter Positive Integer Only !!");
    }
    else
    {
        for(int i = 1 ; i <= num ; i++)
        {
            if(i%2==0)
            {
            sum = sum + i;
            }
        }
    }

    printf("%d",sum);



    return 0;
}