#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    int i;
    int prod = 1;

    for( i=n ; n>0 ; n--)
    {
        prod = prod * n;
    }

        printf("The Factorial Of Number(%d!) : %d",n,prod);
  
    return 0;
}
