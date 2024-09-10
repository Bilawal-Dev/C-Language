#include<stdio.h>

int main()
{
    int n;

    printf("Enter The Fibonacci Number Term :   ");
    scanf("%d",&n);

    int Fib[n];
    
    Fib[0] = 0;
    Fib[1] = 1;


        for(int i = 2 ; i < n ; i++)
        {
            Fib[i] = Fib[i-2] + Fib[i-1];
        }

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",Fib[i]);
    }

}