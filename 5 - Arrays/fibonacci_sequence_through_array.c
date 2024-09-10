#include<stdio.h>

int main()
{
    int size;

    printf("Enter The Size :    ");
    scanf("%d",&size);

    int arr[size];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 0 ; i < size ; i++)
    {
        if(i>1)
        {
        arr[i] = arr[i-1] + arr[i-2];
        }
        printf("%d\t",arr[i]);
    }
}