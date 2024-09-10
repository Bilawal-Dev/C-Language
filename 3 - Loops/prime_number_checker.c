#include<stdio.h>

int main()
{
    int num;
    int Prime = 1;
    printf("Enter A Number :        ");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("Please Enter Another Number!! ");
    }
    else
    {
        for(int i = 2  ; i < num ; i++)
        {
         if(num % i == 0)
         {
            Prime = 0; 
            break;
         }
        }

        if(Prime == 0)
        printf("Not Prime Number !!");
        else if(Prime == 1)
        printf("Prime Number !!");

    }

    printf("\n\nPrime Numbers From 0 - 100 Are As :   \n\n");

        int number;
        Prime = 1;

        for(number = 2 ; number<=100 ; number++)
        {
            Prime = 1;
                for(int i = 2 ; i<number ; i++)
                {
                    if(number % i == 0)
                    {
                        Prime = 0;
                        break;
                    }
                }

            if(Prime == 1)
            {
                printf("%d\n",number);
            }
        }

    printf("\n\nPrime Numbers Between Two Numbers Are As :   \n\n");    

    int num1;
    int num2;

    printf("Enter The 1st Number You Want To Enter :        ");
    scanf("%d",&num1);
    printf("Enter The 2nd Number You Want To Enter :        ");
    scanf("%d",&num2);

    Prime = 1;

        for(num1 ; num1 < num2 ; num1++)
        {
            Prime = 1;
        
            for(int i = 2 ; i<num1 ; i++)
            {
                if(num1 % i == 0)
                {
                    Prime = 0;
                    break;
                }
            }

            if(Prime == 1)
            {
                printf("%d\n",num1);
            }
        }

    return 0;
}
