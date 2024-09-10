/*Int Function Takes Value From User But Return Value*/

#include<stdio.h>
 
int sum(int a , int b);

 int main ()
 {
    printf("Enter A Number :        ");
    int a;
    scanf("%d",&a);

    printf("Enter Another Number :        ");
    int b;
    scanf("%d",&b);

    int result;
    result = sum(a,b);

    printf("%d",result);

    return 0;

}
int sum(int a, int b)
{
    return a + b;
}