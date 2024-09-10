#include<stdio.h>
#include<string.h>

struct Data
{
    char name[20];
};

int main()
{
    struct Data students[3];

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Enter Name Of %d Student :      ",i+1);
        fgets(students[i].name , 20 , stdin);
        
        for(int k = 0 ; ; k++)
        {
            if(students[i].name[k] == '\n')
            {
                students[i].name[k] = '\0';
                break;
            }
        }
        printf("\n");
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("%s\t\t",students[i].name);
    }

    printf("\n\nNames In Alhpabetical Order Are As :    \n");

    for(int i = 0 ; i < 3 - 1 ; i++)
    {
        for(int j = i+1 ; j < 3 ; j++)
        {
            if(strcmp(students[i].name , students[j].name) > 0)
            {
                int temp[20];
                strcpy(temp , students[i].name);
                strcpy(students[i].name , students[j].name);
                strcpy(students[j].name , temp);
            }
        }
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("%s\t\t",students[i].name);
    }
}