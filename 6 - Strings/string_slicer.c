#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter The String :      ");

    fgets(str , 100 , stdin);

    for(int i = 0 ; i != '\0' ; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    printf("\n\nNow Enter First Number N :  ");
    int n , m;
    scanf("%d",&n);
    printf("\nEnter Second Number M :   ");
    scanf("%d",&m);

    printf("\n\nThe Original String Is :    ");
    puts(str);

    char newstr[m-n];
    int x = 0;

    for(int i = n ; i < m-1 ; i++)
    {
        newstr[x] =str[i];
        x++;
    }
    newstr[x] = '\0';

    printf("\nThe Sliced String From %d Word To %d Word Is :    ",n,m);
    puts(newstr);

    printf("\nlength of sliced string is :  %d",strlen(newstr));
}