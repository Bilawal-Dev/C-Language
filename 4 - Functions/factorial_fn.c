#include<stdio.h>

int factorial(int num);

int main()
{
    int n;
    printf("Enter Number :      ");
    scanf("%d",&n);

    if(n<0)
    printf("Enter Positive Integers Only!!");
    else
    printf("%d",factorial(n));
    return 0;
}

int factorial(int num)
{
    int prod = 1;
    for(int i = 1; i<=num ; i++)
    {
       prod = prod * i;
    }
    return prod;
}