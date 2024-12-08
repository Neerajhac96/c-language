#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    float salary;
};
int display1(struct employee aa)
{
    printf("ID: %d\n", aa.id);
    printf("Name: %s\n", aa.name);
    printf("Salary: %.2f\n", aa.salary);
}

int main()
{
    struct employee aa;
    printf("\nENter id ");
    scanf("%d", &aa.id);
    printf("\nENter employee name");
    scanf("%s", aa.name);
    printf("\nEnter employee salary");
    scanf("%f", &aa.salary);
    display1(aa);
    return 0;
}