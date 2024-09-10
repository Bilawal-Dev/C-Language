/*Void Function Takes Value From User But Return No Value*/

#include<stdio.h>
 
void Indian();
void Pakistani();

 int main ()
 {
    printf("Enter 'i' For Indian And 'p' For Pakistani :    ");
    char ch;
    scanf("%c",&ch);


    if(ch=='i' || ch=='I')
    {
        Indian();
    }
    else if(ch=='p' || ch=='P')
    {
        Pakistani();
    }
    else
    {
        printf("Please Enter 'i' Or 'p' Only!!");
    }

    return 0;
 }

 void Pakistani()
{
    printf("Assalamualikum!!");
}
void Indian()
{
    printf("Namaste!!");
}