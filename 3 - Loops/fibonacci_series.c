#include<stdio.h>

int main()
{
    int num1,num2,out;

    for(int i = 0 ; i<=10 ; i++)
    {
        if(i==0)
        {
            printf("%d",0);
        }
        else if(i==1)
        {
            printf("\n%d",1);
        }
        else
        {
            out = num1 + num2;
            printf("\n%d",num1+num2);
        }
    }

    return 0;
}

