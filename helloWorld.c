#include<stdio.h>

void main()
{
    int a, b, *p; // Corrected declaration
    a = 10;
    p = &a;
    b = *p + 20;
    printf("%d", b); // Corrected quotes
}
