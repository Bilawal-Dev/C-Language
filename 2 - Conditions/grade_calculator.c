#include <stdio.h>

int main()
{
    printf("Enter Your Marks: ");
    int marks;
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Error! Please Enter Correct Marks.\n");
    }
    else if (marks == 0)
    {
        printf("Since You Failed, No Grade.\n");
    }
    else if (marks < 30)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 30 && marks <= 70)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks <= 90)
    {
        printf("Grade: A\n");
    }
    else
    {
        printf("Grade: A+\n");
    }

    return 0;
}
