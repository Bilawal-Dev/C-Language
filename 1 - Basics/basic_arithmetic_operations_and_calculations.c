#include<stdio.h>

int main()
{

//Task 1 : Finding Remainder Of Two Numbers =>
int firstnumber;
int secondnumber;

printf("Enter First Number :    ");
scanf("%d",&firstnumber);

printf("Enter Second Number :    ");
scanf("%d",&secondnumber);

printf("The Remainder Of %d To %d Is :  %d",firstnumber,secondnumber,firstnumber%secondnumber);

//Task 2 : Finding Multiplication Of Three Numbers =>
int a;
int b;
int c;

printf("Enter First Number :    ");
scanf("%d",&a);

printf("Enter Second Number :    ");
scanf("%d",&b);

printf("Enter Third Number :    ");
scanf("%d",&c);

printf("The Product Of %d And %d And %d Is :    %d",a,b,c,a*b*c);

//Task 3 : Airthemetic Operation =>
int d;
int e;
int f;

printf("Enter First Number :    ");
scanf("%d",&d);

printf("Enter Second Number :    ");
scanf("%d",&e);

printf("Enter Third Number :    ");
scanf("%d",&f);

printf("The Airthemetic Operation %d+%d-%d :    %d",d,e,f,d+e-f);

//Task 4 : Square Formula =>
int first;
int second;
int answer;

printf("Enter First Number :    ");
scanf("%d",&first);

printf("Enter Second Number :    ");
scanf("%d",&second);

answer = (first * first) + (second * second) + 2(first)(second);

printf("The Square Formula (%d+%d)2 :    %d",first,second,answer);

//Task 5 : Displaying Digits Of 5 Digit Number With Spaces =>
int num;

printf("Please Enter A Five Digit Number :      ");
scanf("%d",&num);

printf("%d\t",num/10000);
    
int alpha;
alpha = num % 10000;
printf("%d\t",alpha/1000);

int bravo;
bravo = alpha % 1000;
printf("%d\t",bravo/100);

int charlie;
charlie = bravo % 100;
printf("%d\t",charlie/10);

int tango;
tango = charlie % 10;
printf("%d\t",tango);

//Task 6 : Calculate Area Of Circle =>

printf("Enter The Radius Of Circle :\n");
    
float radius;
scanf("%f",&radius);

float area;
area = 3.14 * radius * radius;

printf("The Area Of The Circle Is : %f",area);



//Task 7 : Sum Of First And Last Digit =>

int x;
printf("Entered A Four Digit Number :   ");
scanf("%d",&x);

printf("The First Digit Is :      %d\n",x/1000);

int y;
y = x % 10;

printf("The Last Digit Is :       %d\n",y);

printf("The Sum Of First And Last Digit oF %d Is :      %d",x,y,x+y);


return 0;

}