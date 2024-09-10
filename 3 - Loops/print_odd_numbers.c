//Program To Print Odd Numbers From 5 - 50 =>

#include<stdio.h>

int main()
{
// 1st Method :
//Simple Just Using For Loop And Skipping One Digit Value!
    for(int i = 5 ; i<=50 ; i = i + 2)
    {
        printf("%d\n",i);
    }
    
// 2nd Method :
//Using Continue To SKip Those Values(Even)!
    for(int i = 5 ; i<=50 ; i++)
    {
        if(i % 2 == 0)
        {
            continue;
        }
    printf("%d\n",i);
    }

// 3rd Method :
//Using If Condition TO Print Only Odd Values!
    for(int i = 5 ; i<=50 ; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d\n",i);
        }
    }

return 0;
}