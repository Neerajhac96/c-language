#include <stdio.h>
#include <math.h>
#define PI 3.14

double diameter(double r);
double circumference(double r);
double area(double r);
int main()
{
    int r;
    printf("Enter Radius: ");
    scanf("%d", &r);
    diameter(r);
    circumference(r);
    area(r);

    return 0;
}
double diameter(double r)
{
    float diameter;
    diameter = 2 * r;

    printf("Diameter of circle = %.2f\n", diameter);
}

double circumference(double r)
{
    float circumference;
    circumference = 2 * PI * r;

    printf("Circumference of circle = %.2f\n", circumference);
}

double area(double r)
{
    float area;
    area = PI * r * r;

    printf("Area of circle = %.2f\n", area);
}