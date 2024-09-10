#include<stdio.h>
#include<ctype.h> // For isalpha function

int main()
{
    char str[100];

    printf("Enter The String :      ");
    fgets(str, 100, stdin);

    // Remove newline character if present
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
    }

    puts("Original String:");
    puts(str);

    char arr[100];
    int j = 0;

    // Filter alphabetic characters
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if (isalpha(str[i])) // Check if the character is alphabetic
        {
            arr[j] = str[i];
            j++;
        }
    }
    arr[j] = '\0'; // Null-terminate the filtered string

    printf("Filtered String (Only Alphabetic Characters):\n");
    puts(arr);

    return 0;
}
