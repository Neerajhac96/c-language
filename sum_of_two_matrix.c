// Selection sort in array
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], sum;
    printf("Enter elements of the first matrix: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of the second matrix: \n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &b[i][j]);
        }
    printf("First matrix values are:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n");
    printf("Second matrix values are:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", b[i][j]);
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\nAddition of two matrices is:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            c[i][j] = a[i][j] * b[i][j];
    printf("\nMultiplication of two matrices is:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
    return 0;
}