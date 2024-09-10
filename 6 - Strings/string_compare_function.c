#include<stdio.h>
#include<string.h>

int main()
{   //Declaring 2 Strings :
    char str1[100];
    char str2[100];
    //Taking Input In 1st String :
    printf("Enter First Word :      ");
    gets(str1);
    //Taking Input In 2nd String :
    printf("Enter Second Word :      ");
    gets(str2);
    //Using The strcmp Function To Compare The 2 Strings :
    int result = strcmp(str1 , str2);
    //Using Conditional Statements To Display Result Of Comparision :
    if(result == 0)
    {
        printf("The 2 Words Are Equal");
    }
    else if(result > 0)
    {
        printf("The First String Is Greater Than Second String(In Terms Of ASCII Value)");
    }
    else if(result < 0)
    {
        printf("The First String Is Less Than Second String(In Terms Of ASCII Value)");
    }
}