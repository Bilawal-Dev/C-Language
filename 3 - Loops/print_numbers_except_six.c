//Program To Print All Numbers From 1-10 Except 6 =>

#include<stdio.h>

int main()
{
    for(int i = 1 ; i <=10 ; i++)
{  
    if(i == 6) //If Number Is 6
    {          //Then It Skips And Move To Next Value
     continue; 
    }

    printf("%d\n",i);
}

    return 0;
}

/*Break Is Used To Exit The Loop When Condition Is Met
  Continue Is Used To Skip The Value When Condition Is Met*/