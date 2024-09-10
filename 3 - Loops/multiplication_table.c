#include<Stdio.h>

int main()
{
   //Decleration :
   int num;
   int table;

   //Input :
   printf("Enter Number :       ");
   scanf("%d",&num);

    //Print Table :
   for ( int i = 1 ; i<=10 ; i++)
   {
        table = num * i;
        printf("%d * %d = %d\n",num,i,table);
   }

    return 0; 
}
