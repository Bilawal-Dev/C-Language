#include<stdio.h>

int main()
{
    char ch;
    printf("Enter Your Desired Character :      ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Your Character Is In Upper Case !");
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Your Character Is In Lower Case !");
    }
    
    else
        printf("You Enter A Special Character!!");
     
    return 0;

}