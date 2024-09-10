#include<stdio.h>

int main()
{
    int firstno;
    printf("Enter Your First Number :       ");
    scanf("%d",&firstno);
    int secondno;
    printf("Enter Your Second Number :      ");
    scanf("%d",&secondno);

    int hcf;

    for(int i = 1; i<=firstno && i<=secondno ; i++)
    {
        if(firstno % i == 0 && secondno % i == 0)
        {
                hcf = i;
        }
    }



    printf("The HCF Of %d And %d Is :   %d",firstno,secondno,hcf);

    return 0;
}