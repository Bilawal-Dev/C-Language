#include<stdio.h>
#include<string.h>

typedef struct PeopleData
{
    int House_No;
    int Block;
    char City[20];
    char State[20];
}Address;

void StringNewLineRemove(char str[]);

int main()
{
    Address address[5];

    char city[5][20];
    char state[5][20];

    for(int i = 0 ; i < 5 ; i++)
    {
        printf("Enter The Address Of %d Person :    ",i+1);
        printf("\nEnter The House No :    ");
        scanf("%d",&address[i].House_No);
        getchar();

        printf("Enter The Block No :    ");
        scanf("%d",&address[i].Block);
        getchar();

        printf("Enter The City Name :   ");
        fgets(city[i] , 20 , stdin);
        StringNewLineRemove(city[i]);
        strcpy(address[i].City , city[i]);

        printf("Enter The State Name :    ");
        fgets(state[i] , 20 , stdin);
        StringNewLineRemove(state[i]);
        strcpy(address[i].State , state[i]);
        printf("\n\n");
    }

        for(int i = 0 ; i < 5 ; i++)
    {
        printf("The Address Of %d Person :    ",i+1);
        printf("\nHouse No :    %d",address[i].House_No);
        printf("\nBlock No :    %d",address[i].Block);
        printf("\nCity Name :   %s",address[i].City);
        printf("\nState Name :  %s",address[i].State);
        printf("\n\n");
    }
}

void StringNewLineRemove(char str[])
{
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }
}
