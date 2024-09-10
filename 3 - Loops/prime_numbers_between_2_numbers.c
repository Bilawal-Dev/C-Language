#include<stdio.h>

int Primefn(int num1 , int num2);

int main()
{
    int num1;
    int num2;

    printf("Enter The Frist Number :    ");
    scanf("%d",&num1);
    printf("Enter The Second Number :   ");
    scanf("%d",&num2);

    Primefn(num1 , num2);
}

int Primefn(int num1  , int num2)
{
    int Prime = 1;

    for(num1 ; num1 < num2 ; num1++)
    {
        Prime = 1;
        for(int i = 2 ; i < num1 ; i++)
        {
            if(num1 % i == 0)
            {
                Prime = 0;
            }
        }

        if(Prime == 1)
        printf("%d\n",num1);
    }
}