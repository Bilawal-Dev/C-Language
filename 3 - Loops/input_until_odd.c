//Program To Keep Taking Input From User Until Odd Value Is Entered!

#include<stdio.h>
int main()
{
    //initialization
    int num;

    //1st Method =>
    //Input Values From User
    do
    {
        printf("Enter Number :      ");
        scanf("%d",&num);
        printf("%d\n",num);
    }
    //Condition, Loop Continues With Even Values
    while(num % 2 != 0);

    //2nd Method =>
     do
    {
        printf("Enter Number :      ");
        scanf("%d",&num);
        printf("%d\n",num);

        if(num % 2 != 0)
        {          //When Condition Is True
            break; //It Breaks From The Loop!
        }
    }
    while(1); //1 & 0 In Conditions Means True And False

    printf("You Entered An Odd Number !!");
    return 0;
}