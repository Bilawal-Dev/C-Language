#include<stdio.h>

int main()
{
    //Declaring A String :
    char arr[100];

    printf("Enter The String :  ");

    //Taking Input In String Through Scanf Function Using For Loop :
    for(int i = 0 ; i < 100 ; i++)
    {
        scanf("%c",&arr[i]);

        if(arr[i] == '\n')
        {
            arr[i] = '\0';
            break;
        }
    }

    printf("\n");

    //Displaying String Through Printf Function Using For Loop :
    for(int i = 0 ; arr[i]  != '\0' ; i++)
    {
        printf("%c",arr[i]);
    }

}