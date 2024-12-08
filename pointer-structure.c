#include <stdio.h>
#include<string.h>
struct employee
{
    char name[30];
    int id;
    float salary;
};
int display1(struct employee *a)
{
    printf("Name: %s\nID: %d\nSalary: %.2f\n", a->name, a->id, a->salary);
}
int main()
{
    struct employee aa;
    printf("Enter employee name: ");
    fgets(aa.name, sizeof(aa.name), stdin);
    aa.name[strcspn(aa.name, "\n")] = '\0'; // Remove trailing newline character
    printf("Enter employee ID: ");
    scanf("%d", &aa.id);
    printf("Enter employee salary: ");
    scanf("%f", &aa.salary);
    display1(&aa);
    return 0;
}