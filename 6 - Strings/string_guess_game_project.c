#include<stdio.h>

int main()
{
    //Taking The Standard Fixed Input String From The User :
    char str[27];
    printf("\n\nPlease Provide The String(25) Without Any Space:    ");
    fgets(str , 27 , stdin);

    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '\0')
        {
            str[i] = '\n';
            break;
        }
    }

    //Declaring Array Of Strings:
    char student[3][27];

    int score[3] = {0,0,0};


    //Student 1:
    printf("\nInput Responses Of Student - 1:   ");
    fgets(student[0] , 27 , stdin);

    for(int i = 0 ; student[0][i] != '\0' ; i++)
    {
        if(student[0][i] == '\0')
        {
            student[0][i] = '\n';
            break;
        }
    }

    for(int i = 0 ; student[0][i] != '\0' ; i++)
    {
        if(student[0][i] == str[i])
        {
            score[0]++;
        }
    }

    printf("\nStudent - 1:");
    printf("\nTotal Score Is %d Out Of 25",score[0]=score[0]-1);
    printf("\nResponse To The Following Characters Are Wrong:\n");

    if(score[0] == 25)
    {
        printf("NIL");
    }
    else
    {
        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            if(student[0][i] != str[i])
            {
                printf("%d  ",i+1);
            }
        }
    }


    //Student 2 :
    printf("\n\nInput Responses Of Student - 2:   ");
    fgets(student[1] , 27 , stdin);

    for(int i = 0 ; student[1][i] != '\0' ; i++)
    {
        if(student[1][i] == '\0')
        {
            student[1][i] = '\n';
            break;
        }
    }

    for(int i = 0 ; student[1][i] != '\0' ; i++)
    {
        if(student[1][i] == str[i])
        {
            score[1]++;
        }
    }

    printf("\n\nStudent - 2:");
    printf("\nTotal Score Is %d Out Of 25",score[1]=score[1]-1);
    printf("\nResponse To The Following Characters Are Wrong:\n");

    if(score[1] == 25)
    {
        printf("NIL");
    }
    else
    {
        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            if(student[1][i] != str[i])
            {
                printf("%d  ",i+1);
            }
        }
    }


    //Student 3:
    printf("\n\nInput Responses Of Student - 3:   ");
    fgets(student[2] , 27 , stdin);

    for(int i = 0 ; student[2][i] != '\0' ; i++)
    {
        if(student[2][i] == '\0')
        {
            student[2][i] = '\n';
            break;
        }
    }

    for(int i = 0 ; student[2][i] != '\0' ; i++)
    {
        if(student[2][i] == str[i])
        {
            score[2]++;
        }
    }

    printf("\n\nStudent - 3:");
    printf("\nTotal Score Is %d Out Of 25",score[2]=score[2]-1);
    printf("\nResponse To The Following Characters Are Wrong:\n");

    if(score[2] == 25)
    {
        printf("NIL");
    }
    else
    {
        for(int i = 0 ; str[i] != '\0' ; i++)
        {
            if(student[2][i] != str[i])
            {
                printf("%d  ",i+1);
            }
        }
    }

}