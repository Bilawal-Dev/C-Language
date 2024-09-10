#include<stdio.h>

float temp(float celcius);

int main()
{
    float t;
    printf("Enter Temperature In Celcius :      ");
    scanf("%f",&t);

    printf("%f Temp In Fahrenhite Is : %f",t,temp(t));

    return 0;
}

float temp(float celcius)
{
    float fah = (celcius * (9.0/5.0)) + 32;
    return fah;
}