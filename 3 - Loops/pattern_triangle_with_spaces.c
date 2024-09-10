#include<stdio.h>

int main()
{
    for(int i = 1 ; i<=10 ; i++)
    {
        for(int j = 10 ; j>=i ; j--)
        {
            printf(" ");
        }

        for(int k = 1 ; k<=i ; k++)
        {
            printf("*");
        }

        for(int l = 1 ; l<=i ; l++)
        {
            printf("*");
        }

        for(int m = 10  ; m>=i ; m--)
        {
            printf(" ");
        }

        printf("\n");
    }

    return 0;
}