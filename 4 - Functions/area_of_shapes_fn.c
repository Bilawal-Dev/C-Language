#include<stdio.h>

float Circle(float radius);
float Square(float length);
float Rectangle(float length , float width);

int main()
{
    int a;
    printf("Enter A Numer :     ");
    scanf("%d",&a);

    int b;
    printf("Enter Another Number :     ");
    scanf("%d",&b);

    printf("%f",Circle(a));
    printf("\n\n%f",Square(a));
    printf("\n\n%f",Rectangle(a,b));
    
    return 0;
}

float Circle(float radius)
{
    return 3.14 * radius * radius;
}
float Square(float length)
{
    return length * length;
}
float Rectangle(float length , float width)
{
    return length * width;
}

