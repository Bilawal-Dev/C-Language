#include<stdio.h>

int main()
{
    int a,b,c;

     printf("Enter Your First Number : \n");
     scanf("%d",&a);

     printf("Enter Your Second Number : \n");
     scanf("%d",&b);

     printf("Enter Your Third Number : \n");
     scanf("%d",&c);

     float avg = (float)(a+b+c)/3;

     printf("Well Processing.......\n The Average Of The Numbers Is : %f",avg);

     return 0;
}