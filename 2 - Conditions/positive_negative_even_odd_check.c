#include<stdio.h>

int main()
{
    int number;
    printf("Enter Number :");
    scanf("%d",&number);

    if (number > 0)
    {
        printf("Number Is Postive(+ve)\n\n");

        if (number % 2 ==0) //Here Is If Statement Inside If Statement
        {                   //This Is Example Of Nested Statment
            printf("Number Is Also Even");
        }
        else
        {
            printf("Number Is ALso Odd");
        }
    }
    
    else
    {
        printf("Number Is Negative(-ve)");
    }

    return 0;
}
