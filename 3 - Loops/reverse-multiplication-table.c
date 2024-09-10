//Program To Print Table Of Number In Reverse Order =>
#include<stdio.h>

int main()
{
    int num;
    int prod = 1;
    printf("Enter Your Number :     ");
    scanf("%d",&num);

    for (int i = 10 ; i > 0 ; i--)
    {
        prod = num * i;
        printf("\n%d x %d = %d",num,i,prod);
    }
return 0;
}