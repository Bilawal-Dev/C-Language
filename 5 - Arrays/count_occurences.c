#include<stdio.h>

int main()
{
    int n;
    
    printf("Enter Size Of Array :   ");
    scanf("%d",&n);

    int array[n];

    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Value :   \n");
        scanf("%d",&array[i]);
    }

    int x;
    printf("Write Number X You Want To Check :      ");
    scanf("%d",&x);

    int count = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(x==array[i])
        count++;
    }

    printf("The Element %d Is Repeated %d Times!!!",x,count);
}