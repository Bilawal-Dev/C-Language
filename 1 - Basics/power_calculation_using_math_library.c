#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter Number : ");
    int a,b;
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);

    int power;
    power = pow(a,b);

    printf("The Power %d Of Number %d Is => %d",b,a,power);
    return 0;
}