/*We Can Use Void Fn Here,Because int Fn Is
Used To Return Value But Here We Are Not 
Returning Any Value To Main Fn But Are Just
Calling The Output Fn In Main Fn*/
#include<stdio.h>

int Output(float Temp);

int main()
{
    float num;
    printf("Enter Temperature :     ");
    scanf("%f",&num);
    
    Output(num);

    return 0;
}

int Output(float Temp)
{
    int Result;

    if(Temp>25)
    {
    printf("HOT!!!");
    }
    else
    {
    printf("COLD!!!");
    }
}