#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter Your String :         ");
    fgets(str , 100 , stdin);

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    char x;
    printf("\n\nEnter The Character You Want To Check :     ");
    scanf("%c",&x);

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == x)
        {
            printf("\n\nYes, It Is Present In String At %d Index!!!",i+1);
            return 0;
        }
    }

    printf("\n\nNo, It Is Not Present In The String!!!");
}