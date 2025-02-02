#include <stdio.h>
int main()
{
    int arr[100], n, i, j;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter element in an array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n-1; i++)
    {
        int smalestIdx=i;
        for (j = i+1; j < n; j++)
        {
            if (arr[j] < arr[smalestIdx])
            {
                smalestIdx=j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smalestIdx];
        arr[smalestIdx] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}