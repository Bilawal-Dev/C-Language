#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter Your Full Name :      ");

    for(int i = 0 ; ; i++)
    {
        scanf("%c",&str[i]);
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("\n\nYour Full Name Is :       ");
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}