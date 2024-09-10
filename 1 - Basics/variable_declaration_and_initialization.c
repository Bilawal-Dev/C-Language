#include<stdio.h>
int main()
{
    int a = 45;

    float b = 4.5;

    //int a = 30; //We Can Only Declare Variable Once
                //If We Declare Again It Will Show Error

    a = 30;             //But We Can Change Value Of Variable

    printf("%d\n",a);
    
    char c = 35; //We Have Assigned An Integer Data Type To Char
    
    printf("%d",c); //We'll Use %d Because It Has Integer Value

    c = 'a'; //Here We Have Update Value Of C

    printf("%c",c); //We'll Use %c Because It Has Charctr Value

    return 0;
}
