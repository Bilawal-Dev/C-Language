#include <stdio.h>

//Command Line Arguments Are Passed To The Main F/n
int main(int argc, char *argv[]) 
{
    
//The argc Holds An Integer Value Of How Many Arguments Are Passed
    printf("Number of arguments: %d\n", argc);

//The argv Holds The Arguments,Since It's An Array Of String It Also Holds Name Of Program

    // Printing all command-line arguments
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
