#include<stdio.h>

int main()
{
    printf("Enter A Number Of Your Choice :");

    int a;
    scanf("%d",&a);

    if (a % 2 == 0)
    {
        printf("%d Is An Even Number",a);
    }
    
    else 
    {
     printf("%d Is A Odd Number",a);
    }

    return 0;
}