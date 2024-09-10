//Print The Value Of i From Its Pointer To Pointer :

#include<stdio.h>

/* & Is Used To Store The Address Of Memory Location
* IS Used To Print The Value At Address */

int main()
{
    int i = 5;

    int *ptr = &i;

    int **pptr = &ptr;


    //Both Are Same!!!
    printf("%d",*(*pptr));
    printf("%d",**pptr);

    return 0;
}