#include<stdio.h>

void HelloWorld(char str[]);

int main()
{
    HelloWorld("print");
    return 0;
}

void HelloWorld(char str[])
{
    printf("%s",str);
}
