#include<stdio.h>

int main()
{
    int size;
    printf("Size :  ");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("\nEnter Element Of Array    :       ");
        scanf("%d",&arr[i]);
    }

    printf("\n\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr[i]);
    }

    int max;
    int temp;

    for(int i = 0 ; i < size ; i++)
    {
        max = i;
        for(int j = i ; j < size ; j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }

    printf("\n\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr[i]);
    }

}