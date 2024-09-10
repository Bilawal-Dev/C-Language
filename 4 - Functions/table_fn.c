/*Printing Table Of Number Using Function :*/

#include<stdio.h>

void table(int num);

int main()
{
    printf("Enter A Number :        ");
    int n;
    scanf("%d",&n);

    table(n);

    return 0;
}

void table(int num)
{
    int prod;
    for(int i=1 ; i<=10 ; i++)
    {
        prod = num * i;
        printf("%d x %d = %d\n",num,i,prod);
    }
}