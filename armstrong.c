#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    int num = n;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (sum == num)
    {
        printf("Armstrong: %d", sum);
    }
    else
    {
        printf("Not an Armstrong: %d", sum);
    }
    return 0;
}