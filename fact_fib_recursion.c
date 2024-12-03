#include <stdio.h>

int factorial(int);
int fibonacci(int);

int main()
{
    int num, choice, fact, fib;
    printf("Enter a choice 1 = Factorial OR 2 = Fibonacci : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        fact = factorial(num);
        printf("Factorial of %d is %d\n", num, fact);
    }
    else if (choice == 2)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("Fibonacci number = ");
        for (int i = 0; i < num; i++)
        {
            fib = fibonacci(i);
            printf("%d ", fib);
        }
        printf("\n");
    }
    else
        printf("Enter valid number");
    return 0;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int fibonacci(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
