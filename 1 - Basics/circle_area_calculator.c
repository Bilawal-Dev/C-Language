#include<stdio.h>

int main()
{
    printf("Enter The Radius Of Circle :\n");
    
    float radius;
    scanf("%f",&radius);

    float area;
    area = 3.14 * radius * radius;

    printf("The Area Of The Circle Is : %f",area);
    return 0;
}