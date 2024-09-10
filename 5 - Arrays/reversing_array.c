//C Program To Reverse An Array :   

#include<stdio.h>

void print_array(int arr[] , int size);
int  reverse_array(int arr[] , int size);

int main()
{
    int size;
    printf("Enter The Size Of An Array :    ");
    scanf("%d",&size);

    printf("\n");

    int arr[size];
    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter The Array Element :   ");
        scanf("%d",&arr[i]);
    }

    print_array(arr , size);

    reverse_array(arr , size);

    print_array(arr , size);


}

int reverse_array(int arr[] , int size)
{
    int temp;
    for(int i = 0 ; i < size ; i++)
    {
        temp = arr[i];
        arr[size - i - 1] = temp;
    }
}

void print_array(int arr[] , int size)
{
    printf("\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\t",arr[i]);  
    }
}