#include <stdio.h>
int main()
{
    int arr[100];
    int i, n, sum = 0;
    float avg;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("Enter element in an array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        sum += arr[i];
        avg = (float)sum / n;
    }
    printf("\nAverage of all elements: %.2f", avg);
}