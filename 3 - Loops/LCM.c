#include<stdio.h>

int main()
{
    int firstno;
    printf("Enter Your First Number :       ");
    scanf("%d",&firstno);
    int secondno;
    printf("Enter Your Second Number :      ");
    scanf("%d",&secondno);

    int lcm = 1;


    for(int i = 1 ; i<=firstno && i<=secondno ; i++)
    {
        if(firstno % i == 0 || secondno % i == 0)
        {


            lcm = lcm * i;
        }
    }

    printf("The LCM Of %d And %d Is :   %d",firstno,secondno,lcm);

    return 0;
}