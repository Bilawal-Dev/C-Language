#include<stdio.h>

int main()
{
  int sum = 0;

  for(int i = 1; i<= 10 ; i = i+1)
  {
    sum = sum + i;
  }

  printf("Sum Of Numbers From 1-10 Is %d",sum);

  return 0;

}