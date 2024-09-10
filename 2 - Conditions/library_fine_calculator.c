#include <stdio.h>

int main()
{
    int expected_day;
    int expected_month;
    int expected_year;
    int actual_day;
    int actual_month;
    int actual_year;
    char book;
    int days;
    int charges = 0;  // Initialize charges to avoid undefined behavior

    // Input expected return date
    printf("Enter Your Expected Return Day: ");
    scanf("%d", &expected_day);
    printf("Enter Your Expected Return Month: ");
    scanf("%d", &expected_month);
    printf("Enter Your Expected Return Year: ");
    scanf("%d", &expected_year);

    printf("Your Expected Return Date Is %d/%d/%d\n", expected_day, expected_month, expected_year);

    // Input actual return date
    printf("Enter Your Actual Return Day: ");
    scanf("%d", &actual_day);
    printf("Enter Your Actual Return Month: ");
    scanf("%d", &actual_month);
    printf("Enter Your Actual Return Year: ");
    scanf("%d", &actual_year);

    printf("Your Actual Return Date Is %d/%d/%d\n", actual_day, actual_month, actual_year);

    // Input type of book
    printf("Enter The Type Of Book You Borrowed (Enter F For Fiction, N For Non-Fiction, And R For Reference Book): ");
    scanf(" %c", &book);  // Note the space before %c to skip any leftover whitespace

    // Calculate days overdue
    if (actual_year == expected_year)
    {
        days = actual_day - expected_day;

        if (book == 'F' || book == 'f')
        {
            if (days > 0 && days <= 7)
                charges = 10 * days;
            else if (days > 7 && days <= 14)
                charges = 20 * days;
            else if (days > 14)
                charges = 30 * days;
        }
        else if (book == 'N' || book == 'n')
        {
            if (days > 0 && days <= 7)
                charges = 5 * days;
            else if (days > 7 && days <= 14)
                charges = 10 * days;
            else if (days > 14)
                charges = 15 * days;
        }
        else if (book == 'R' || book == 'r')
        {
            printf("No Charges For Reference Books That Are Returned The Same Year!\n");
            return 0;
        }
        else
        {
            printf("Error! Invalid book type.\n");
            return 0;
        }
    }
    else
    {
        if (book == 'F' || book == 'f')
            charges = 50;
        else if (book == 'N' || book == 'n')
            charges = 30;
        else if (book == 'R' || book == 'r')
            charges = 10;
        else
        {
            printf("Error! Invalid book type.\n");
            return 0;
        }
    }

    printf("Your Calculated Fine Is = %d\n", charges);

    return 0; 
}
