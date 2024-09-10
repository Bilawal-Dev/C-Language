#include<Stdio.h>

int main()
{
    int num;
    printf("Enter Your Number :     ");
    scanf("%d",&num);

    //USING FOR LOOP =>
    for(int i = 0 ; num >= i ; i++) 
    {
        printf("%d\n",i);
    }

    // //Using  While Loop =>
    int i = 0 ;   
    while ( num >= i)
    {
        printf("%d\n",i);
        i++;
    }

    // //Using Do While Loop =>
    int i = 0; 
    do{
        printf("%d\n",i);
        i++ ;
    }
    while(num >= i);


    return 0;
}