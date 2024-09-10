#include<stdio.h>

int main()
{
    int a;
    printf("Enter An Integer :  ");
    scanf("%d",&a);

    if (a > 0)
    printf("%d Is A Postive Integer!",a);
    else if (a < 0)
    printf("%d Is A Negative Integer!",a);
    else
    printf("%d Is A Zero!",a);

    return 0;
}