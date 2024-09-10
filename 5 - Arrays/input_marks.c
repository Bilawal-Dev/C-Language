#include<stdio.h>

int main()
{
    int marks[2][7];
    int total = 0;
    int sum = 0;

    for(int i = 0 ; i < 2 ; i++)
    {
        if(i==0)
        {
            printf("Enter Marks Of Ali!!!\n");
        }
        else
        {
            printf("ENter Marks Of Bilawal!!!\n");
        }
        
        for(int j = 0 ; j < 7 ; j++)
        {
            printf("Enter Marks :   \n");
            scanf("%d",&marks[i][j]);
        }
    }
}