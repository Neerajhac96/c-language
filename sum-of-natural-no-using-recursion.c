#include <stdio.h>
int sum_of_natural_numbers(double n)
{
    if (n == 0)
        return 0;
    return n + sum_of_natural_numbers(n - 1);
}
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum_of_natural_numbers(n));
    return 0;
}