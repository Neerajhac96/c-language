#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    float avg;

    printf("Enter 10 integers: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter a Number:",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 10; i++)
        sum += arr[i];
        avg += sum/ 10.0;
            printf("Sum of array: %d \nAverage: %.2f", sum,avg);
    return 0;
}