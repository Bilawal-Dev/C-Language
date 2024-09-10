#include<Stdio.h>

int main()
{
   //Decleration :
   int num;
   int sum = 0;

   //input :
   printf("Enter Number :       ");
   scanf("%d",&num);

   //Calculate Sum Of First 'num' Numbers :
   for ( int i = 1 ; num >= i ; i++)
   {  
      sum = sum + i;
   }
   printf("The Sum Of First %d Numbers Is :    %d\n",num,sum);

   //Print Numbers For 'num' In Reverse Order :
   for( int i = num ; i>0 ; i-- )
   {
      printf("%d\n",i);
   }

    return 0; 
}
