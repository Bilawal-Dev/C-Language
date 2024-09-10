#include<stdio.h>

int main()
{
    int size;

    printf("Enter The Size Of Array :   ");
    scanf("%d",&size);

    int array[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter Value :   ");
        scanf("%d",&array[i]);
    }

    int max = array[0];
    int secmax = array[0];

    for(int i = 0 ; i < size ; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(max == array[0])
        {
            secmax = 0;
        }

        if(array[i] == max)
        {
            continue;;
        }

        if(array[i] > secmax)
        {
            secmax = array[i];
        }
    }

    printf("\n\nThe Maximum Element In The Array Is :   %d",max);
    printf("\n\nThe 2nd Maximum Element In The Array Is :   %d",secmax);
}
