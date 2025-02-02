#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr,sum = 0, avg;;
    printf("Enter the size: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &ptr[i]);
        sum = sum + ptr[i];
    }
    avg = (float)sum / n;
    printf("Sum of all numbers is: %d", sum);
    printf("\nAverage of all numbers is: %d", avg);
    return 0;
}