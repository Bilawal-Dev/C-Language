#include<stdio.h>

int main()
{
    //Top Tree Part 
    for(int i = 1 ; i <= 5 ; i++)
    {
        for(int j = 30 ; j >= i ; j--)
        {
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        for(int k = 2 ; k <= i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Middle Tree Part
    for(int i = 3 ; i <= 12 ; i++)
    {
        for(int j = 30 ; j >= i ; j--)
        {
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        for(int k = 2 ; k <= i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Last Tree Part
        for(int i = 8 ; i <= 16 ; i++)
    {
        for(int j = 30 ; j >= i ; j--)
        {
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++)
        {
            printf("*");
        }
        for(int k = 2 ; k <= i ; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    //Stem Of Tree
        for(int i = 1 ; i <= 5 ; i++)
    {
        for(int k = 1 ; k <= 28 ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= 5 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}