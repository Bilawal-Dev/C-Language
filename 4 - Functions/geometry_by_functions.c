#include<stdio.h>

void Circle(float radius);
void Square(float length);
void Rectangle(float length , float width);

int main()
{

    int number;
    printf("Enter A Number :    ");
    scanf("%d",&number);

    Circle(number);

    Square(number);

    int number2;
    printf("\n\nEnter Another Number :    ");
    scanf("%d",&number2);  

    Rectangle(number , number2);  

    return 0;
}

void Circle(float radius)
{
    printf("The Area Of Circle Is :     %f",3.14*radius*radius);
}

void Square(float length)
{
    printf("\nThe Area Of Square Is :     %f",length*length);
}

void Rectangle(float length , float width)
{
    printf("The Area Of Rectangle Is :     %f",length * width);
}