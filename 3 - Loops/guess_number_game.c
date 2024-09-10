#include<stdio.h>

int main()
{
    int number;
    int count = 0;

    //First Method Using Do While Loop :
    do
    {
        printf("Enter A Number :        ");
        scanf("%d",&number);
        count++;
    }
    while(number != 46);

    printf("You Guess Correct Answer In %d Trys !!",count);


    //Second Method Using While Loop :
    printf("\nEnter A Number :        ");
    scanf("%d",&number);
    count = 1;
    while(number != 46)
    {
        printf("Enter Another Number :        ");
        scanf("%d",&number);
        count ++;
    }
    printf("You Guess Correct Answer In %d Trys !!",count);

    return 0;
}