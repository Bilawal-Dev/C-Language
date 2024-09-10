#include<stdio.h>

int main()
{
    int num = 12;
    printf("%d",num);

    printf("\n%p",&num);
    printf("\n%u",&num);

    int *pointer = &num;

    printf("\n%p",pointer);

    return 0;
}