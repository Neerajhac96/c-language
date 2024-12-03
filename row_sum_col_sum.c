// Selection sort in array
#include <stdio.h>

int main()
{
    int a[3][3], sum;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    printf("array values are");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += a[i][j];
        printf("\nSum of Row %d is: %d ", i + 1, sum);
    }
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += a[j][i];
        printf("\nSum of Column %d is: %d ", i + 1, sum);
    }
    return 0;
}