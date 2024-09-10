#include<stdio.h>

int main()
{
    int marks;
    printf("Enter Your Marks(0-100) : ");
    scanf("%d",&marks);

    if(marks>=30 && marks <=100)
    {
        printf("You Are Passed!!");
    }
    else if (marks > 100)
    {
        printf("Error!\nPlease Enter From (0-100)");
    }
    else
    {
        printf("You Are Failed!!");
    }

    //To Print Through Ternary Operator =>
    marks >= 30 ? printf("Passed") : printf("Failed");

    return 0;
}