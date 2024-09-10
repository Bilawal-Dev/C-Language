#include<stdio.h>

void ScanFn(int arr[][2] , int n);

int main()
{
    int matrix1[2][2];
    int matrix2[2][2];

    printf("Enter The Elements Of First Matrix =>");
    ScanFn(matrix1 , 2);

    printf("\n\nEnter Elements Of Second Matrix =>");
    ScanFn(matrix2 , 2);

    int result[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            result[i][j] = matrix1[i][0] * matrix2[0][j] + matrix1[i][1] * matrix2[1][j];
        }
    }

    printf("\nResult of matrix multiplication:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

void ScanFn(int arr[][2] , int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("\nEnter Elements Of %d Row",i+1);
        for(int j = 0 ; j < 2 ; j++)
        {
            printf("\nEnter %d Element :      ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
