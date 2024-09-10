#include<stdio.h>
#include<string.h>

int main()
{
    char password[100];
    char confirmpassword[100];
    char salt[4] = "123";

    printf("Enter Password :    ");
    fgets(password , 23 , stdin);
    printf("\nConfirm Password :    ");
    fgets(confirmpassword , 23 , stdin);

    for(int i = 0 ; password[i] != '\0' ; i++)
    {
        if(password[i] == '\n')
        {
            password[i] = '\0';
            break;
        }
    }

    // strcat(password , salt);

    for(int i = 0 ; confirmpassword[i] != '\0' ; i++)
    {
        if(confirmpassword[i] == '\n')
        {
            confirmpassword[i] = '\0';
            break;
        }
    }

    int Output = 1;

    if(strlen(password) >= strlen(confirmpassword))
    {
        for(int i = 0 ; password[i] != '\0' ; i++)
        {
            if(password[i] != confirmpassword[i])
            {
                Output = 0;
            }
        }
    }
    else
    {
        for(int i = 0 ; confirmpassword[i] != '\0' ; i++)
        {
            if(confirmpassword[i] != password[i])
            {
                Output = 0;
            }
        }  
    }

    if(Output == 0)
    {
        printf("\n\nPassword Doesn't Match!!!\n\n");
    }
    else
    {
        printf("Password Matched!!!");
    }

    // puts(password);
}