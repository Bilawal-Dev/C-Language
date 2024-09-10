#include<stdio.h>
#include<string.h>

int main()
{
    char str[3][20];
    int j = 0;
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Enter %d Student :      ",i+1);
        fgets(str[i] , 20 , stdin);

        for(int i = 0 ; str[i][j] != '\0' ; i++)
        {
            if(str[i][j] == '\n')
            {
                str[i][j] = '\0';
                break;
            }
        } 
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Student %d Name :       %s",i+1,str[i]);
    }
}