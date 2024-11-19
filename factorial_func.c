#include <stdio.h>
int factorial(int);
int main()
{
    int n, ans;
    printf("Enter a number:");
    scanf("%d", &n);
    ans = factorial(n);
    printf("%d", ans);
    return 0;
}
int factorial(int n)
{
    int f;
    if (n == 0)
        return 1;
    else
        f = n * factorial(n - 1);
    return f;
}