#include<stdio.h>

int PrintArray(int arr[] , int size);

int main()
{
    int size;
    printf("Enter The Size Of Array :   ");
    scanf("%d",&size);

    int marks[size];

    for(int i = 0 ; i < size ; i++)
    {
        printf("Enter Element At %d Index :     \n",i+1);
        scanf("%d",&marks[i]);
    }

    printf("The Elements Of Array Are As :      \n");
    
    PrintArray(marks , size);

    for(int i = 0 ; i < size / 2 ; i++)
    {
        int firstterm = marks[i];
        int secondterm = marks[size - i - 1];
        marks[i] = secondterm;
        marks[size - i - 1] = firstterm;
    }

    printf("The Elements Of Array Are As :      \n");

    PrintArray(marks , size);

}

int PrintArray(int arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d\n",arr[i]);
    }
}