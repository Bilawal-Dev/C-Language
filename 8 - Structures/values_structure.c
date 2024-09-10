#include<stdio.h>

struct Values
{
    int data[5];
    int x;
    float y;
};

int main()
{
    struct Values testing;

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter Array Element :       ");
        scanf("%d",&testing.data[i]);
    }
    testing.x = 2023;
    testing.y = 0.9;

    printf("The Array Elements Are As :");
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("\t%d",testing.data[i]);
    }
    printf("\nThe Integer Element Is :    %d",testing.x);
    printf("\nThe Floating Element Is As :    %f",testing.y);
}

