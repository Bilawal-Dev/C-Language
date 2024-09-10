#include<stdio.h>

int Fibonnaci(int num);

int main()
{

    Fibonnaci(6);
    return 0;
}

int Fibonnaci(int num)
{
    if(num == 1)
    {
        return 1;
    }
    else if (num==0)
    {
        return 0;
    }
    else
    {
    int num1;
    int num2;
    num1 = Fibonnaci(num-1);
    num2 = Fibonnaci(num-2);
    printf("\n%d",num1 + num2);
    return num1 + num2;
    }
}
