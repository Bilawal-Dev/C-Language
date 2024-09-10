#include<stdio.h>
#include<string.h>

struct Friends
{
    char name[20];
    char phone[13];
    char address[100];
};

void SortFn(struct Friends *var , int size);

int main()
{
    struct Friends arr[3];

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Enter Details Of %d Friend =>    \n",i+1);

        printf("Enter Name Of Friend :  ");
        fgets(arr[i].name , 20 , stdin);
        for(int k = 0 ; ; k++)
        {
            if(arr[i].name[k] == '\n')
            {
                arr[i].name[k] = '\0';
                break;
            }
        }

        printf("Enter Your Friend Phone Number :    ");
        fgets(arr[i].phone , 13 , stdin);
        for(int k = 0 ; ; k++)
        {
            if(arr[i].phone[k] == '\n')
            {
                arr[i].phone[k] = '\0';
                break;
            }
        }

        printf("Enter Your Friend Address :    ");
        fgets(arr[i].address , 100 , stdin);
        for(int k = 0 ; ; k++)
        {
            if(arr[i].address[k] == '\n')
            {
                arr[i].address[k] = '\0';
                break;
            }
        }

        printf("\n");
    }

    printf("\n\n");
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Name : %s\t|\tAddress : %s\n",arr[i].name,arr[i].address);
    }

    printf("\n\n");
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Name : %s\t|\tPhone Number : %s\n",arr[i].name,arr[i].phone);
    }

    printf("\n\n");
    printf("Friends Name In Alphabetical Order Are As :");
    SortFn(&arr , 3);
    for(int i = 0 ; i < 3 ; i++)
    {
        printf("\t%s\t|",arr[i].name);
    }
}

void SortFn(struct Friends *var , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = i + 1 ; j < size - 1 ; j++)
        {
            if(strcmp(var[i].name , var[j].name) > 0)
            {
                int temp[20];
                strcpy(temp , var[i].name);
                strcpy(var[i].name , var[j].name);
                strcpy(var[j].name , temp);
            }
        }
    }
}
