#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        int elements[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &elements[i]);
        }
        int semitones = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(elements[i] - elements[i + 1]);
            if (diff != 5 && diff != 7)
            {
                semitones = 0;
                break;
            }
        }
        if (semitones)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}