//Program To Keep Taking Input From User Untill Multiple Of 7 Is Entered!
#include<stdio.h>

int main()
{
    int num;

    do
    {
        printf("Enter Number :      ");
        scanf("%d",&num);
        printf("%d\n",num);
    }
    while(num % 7 != 0);
    
    printf("You Entered Multiple Of 7!!");

    return 0;
}