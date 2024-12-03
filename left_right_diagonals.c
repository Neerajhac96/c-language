// Selection sort in array
#include <stdio.h>

int main()
{
    int a[3][3], even, odd;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    printf("array values are");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n");
    printf("The right diagonal elements are: ");
    for(int i=0;i < 3;i++)
    for(int j=0;j < 3;j++){
        if(i==j)
        printf("%d\t", a[i][j]);
    }
    printf("\n");
    printf("left side diagonal lements are: ");
    for(int i=0;i < 3;i++)
    for(int j=0;j < 3;j++){
        if(i+j==2)
        printf("%d\t", a[i][j]);
    }
    return 0;
}