#include<stdio.h>

void swapfn(int x , int y);

int main()
{
    int a;
    int b;

    printf("Enter First Number X :  ");
    scanf("%d",&a);
    printf("Enter Second Number Y :  ");
    scanf("%d",&b);

    swapfn( a , b);

    return 0;
}

void swapfn(int x , int y)
{
    printf("\n\nBefore Swapping!!\nX = %d\nY = %d",x,y);
    
    int temp;
    temp = y;
    y = x;
    x = temp;
    
    printf("\n\nAfter Swapping!!\nX = %d\nY = %d",x,y);
} 