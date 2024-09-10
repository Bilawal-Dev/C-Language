//Functions In Programming :
/*Use To Perform Specific Tasks
Can Be Used Multiple Times
Functions Increase Re-usability*/
#include<stdio.h>

//Declaring Functions :
void First();
void Second();

int main()
{ 
    //Calling Functions :
    First();
    Second();

return 0;
}

//Defining Functions :
void First()
{
    printf("HellO!\n");
}
void Second()
{
    printf("Good Bye!!");
}