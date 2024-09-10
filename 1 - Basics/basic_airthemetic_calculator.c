#include<stdio.h>

int main()
{
    int a , b , sum , multiply , divide , remainder , difference;

    printf("Enter Your First Number : ");
    scanf("%d",&a);

    printf("Enter Your Second Number : ");
    scanf("%d",&b);

    sum = a + b;
    multiply = a * b;
    difference = a - b;
    divide = a / b;
    remainder = a % b;

    printf("The Sum Of The Numbers Is : %d\n\n",sum);

    printf("The Product Of The Numbers Is : %d\n\n",multiply);

    printf("The Difference Of The Numbers IS : %d\n\n",difference);

    printf("The Quotient OF The Numbers Is : %d\n\n",divide);

    printf("The Remainder Of The Numbers Is : %d\n\n",remainder);

    printf("Thank You Very Much Sir!!!!!!\n\n");

    return 0;
     
    }