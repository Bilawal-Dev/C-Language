#include<stdio.h>

int main()
{
    printf("Enter Your First Number :");
    int a;
    scanf("%d",&a);

    int square;

    square = a * a;

    printf("The Square Of %d Is %d",a,square);

    return 0;
}