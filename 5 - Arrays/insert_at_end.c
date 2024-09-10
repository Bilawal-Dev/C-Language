#include<stdio.h>

int main()
{
    int size;

    printf("Enter The Size Of Array :   ");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter Element :     ");
        scanf("%d",&arr[i]);
    }

    int array[size+1];

    for(int i = 0 ; i < size ; i++)
    {
        array[i] = arr[i];
    }

    printf("Enter The Element You Want To Insert At The End Of Array :  ");
    scanf("%d",&array[size]);

    for(int i = 0 ; i <= size ; i++)
    {
        printf("%d\t",array[i]);
    }
}