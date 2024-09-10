#include<stdio.h>

int percentage(int Science , int Maths , int Sanskrit);

int main()
{
    int a,b,c;
    printf("Enter Your Marks In Science :   ");
    scanf("%d",&a);

    printf("Enter Your Marks In Maths :     ");
    scanf("%d",&b);

    printf("Enter Your Marks In Sanskrit :      ");
    scanf("%d",&c);

    char ch = '%';

    printf("\n\nPercentage :    %d%c",percentage(a,b,c),ch);

    return 0 ;
}

int percentage(int Science , int Maths , int Sanskrit)
{
    return (Science + Maths + Sanskrit)/3;
}