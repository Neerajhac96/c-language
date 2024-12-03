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
    printf("Originol value:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n");
    printf("transpose of matrix:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[j][i]);
    }
    return 0;
}