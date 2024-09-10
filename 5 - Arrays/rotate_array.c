#include<stdio.h>

int main()
{
    int size;
    printf("Enter Size :    ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter Elemetns Of Array :   ");
    for(int i = 0 ; i < size ; i++)
    {
        printf("\nEnter Element :   ");
        scanf("%d",&arr[i]);
    }

    printf("\n\n");

    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t\t",arr[i]);
    }

    int n;
    printf("\n\nEnter N Number To Rotate The Array :    ");
    scanf("%d",&n);

    int temp1;
    int temp2;
    int k = 0;
    //For First Sub-Array :
    for(int i = 0 ; i < (size-n)/2 ; i++)
    {
        temp1 = arr[i];
        arr[i] = arr[size - n - 1 - i];
        arr[size - n - i - 1] = temp1;
    }
    printf("1st :\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t\t",arr[i]);
    }
    //For Second Sub-Array :
    for(int i = size - n ; i < size/2 + (n - 1) ; i++)
    {
        temp1 = arr[i];
        temp2 = arr[size - 1 - k];
        arr[size - n - i] = temp2;
        arr[size - 1 - i] = temp1;
        k++;
    }

    printf("\n2nd:\n\n");

    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t\t",arr[i]);
    }

    for(int i = 0 ; i < size/2 ; i++)
    {
        temp1 = arr[i];
        temp2 = arr[size - 1 - i];
        arr[i] = temp2;
        arr[size - i - 1] = temp1;
    }

    printf("\nFinal:\n\n");

    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t\t",arr[i]);
    }
}