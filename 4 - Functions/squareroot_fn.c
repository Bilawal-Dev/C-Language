#include<stdio.h>
#include<math.h>

float Sqrroot(int number);

int main()
{
    int num;
    printf("Enter Number :      ");
    scanf("%d",&num);

    printf("Square Root =  %f",Sqrroot(num));

    return 0;
}

float Sqrroot(int number)
{
    float root = pow(number,0.5);
    return root;
}