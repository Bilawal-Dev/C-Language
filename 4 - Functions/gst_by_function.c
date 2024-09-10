#include<stdio.h>

/*Declaring Price Function
Name Of Function Is Price & price Is The Parameter Of Float Data Type
The Parameter Is The Variable Used In Function Decleration
Parameters Are Known As Formal Parameters
Used To Recieve Value*/
void Price(float price);


int main()
{
    printf("Enter Price Of Item :        ");
    int p;
    scanf("%d",&p);
/*Calling Price Function
Here, p Is Known As Argument
Argument is actual value of variable that gets passed to function
Arguments Are Known As Actual Parameters
Used To Send Value*/
    Price(p);

    return 0;
}
/*Defining Price Function
Here We Will Use The Parameter
But When We Will Call The Function In Main Then We Will Use Argument
The Parameter Gets Replace With Argument Upon Call In Main F/n*/
void Price(float price)
{
    price = price + (price * 0.18);
    printf("New Price After GST Is :    %f",price);
}