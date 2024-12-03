// Selection sort in array
#include <stdio.h>

int main()
{
    int a[2][3], even, odd;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    printf("array values are");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    even = odd = 0;
    for(int i = 0; i<2;i++)
    for(int j = 0;j<3;j++)
    if (a[i][j] % 2 == 0)
        even++;
        else
        odd++;
    
    printf("\nNumber of even numbers are: %d", even);
    printf("\nNumber of odd numbers are: %d", odd);
    return 0;
}