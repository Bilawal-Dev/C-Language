#include<stdio.h>

int main()
{
    for(int i = 1 ; i <= 10 ; i++)
    {
        for(int j = 10 ; j >= i ; j--)
        {
            printf(" ");
        }
        if(i != 6)
        {
            printf("*");
        }
        else
        {
            for(int x = 1 ; x < 4 ; x++)
            {
                printf("* ");
            }
        }

        for(int k = 2 ; k <= i ; k++)
        {
            if(i == 6)
            {
                continue;
            }
            printf(" ");
        }

        for(int l = 2 ; l <= i ; l++)
        {
            if(i == 6)
            {
                continue;
            }
            printf(" ");
        }

        if(i != 6)
        {
            printf("*");
        }
        else
        {
            for(int x = 1 ; x < 4 ; x++)
            {
                printf(" *");
            }
        }

        printf("\n");


    }

    }
