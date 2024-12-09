#include <stdio.h>
int main()
{
    int arr[20], n;
    printf("Enter a number you want to print in subarray: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Subarray:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
    return 0;
}