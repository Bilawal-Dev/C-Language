#include<stdio.h>

int main()
{
    int c;
    float f;

    printf("Write The Temperature In Celcius : \n");
    scanf("%d",&c);

    f = (c * 9/5) + 32;

    printf("The Temperature In Fahrenheit Is %f",f);
    return 0;

}