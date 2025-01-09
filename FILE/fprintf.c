#include <stdio.h>
int main()
{
    FILE *fp;
    int a, b;
    fp = fopen("myfile.txt", "w");
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    fprintf(fp, "Sum of %d and %d is %d", a, b, a + b);
    fclose(fp);
}