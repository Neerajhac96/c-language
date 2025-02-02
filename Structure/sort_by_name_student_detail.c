#include <stdio.h>
#include <string.h>
struct student
{
    int rollNo;
    int age;
    double marks;
    char name[100];
};
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student st[n];
    printf("Enter the details of each student:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student: \n");
        scanf("%s", st[i].name);
        printf("Enter Roll number: \n");
        scanf("%d", &st[i].rollNo);
        printf("Enter Age of student: \n");
        scanf("%d", &st[i].age);
        printf("Enter Marks of student: \n");
        scanf("%lf", &st[i].marks);
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(st[j].name, st[j + 1].name) > 0)
            {
                struct student temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
    printf("Student Details:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s\n", st[i].name);
        printf("Roll Number: %d\n", st[i].rollNo);
        printf("Age: %d\n", st[i].age);
        printf("Marks: %.2lf\n", st[i].marks);
        printf("\n");
    }
    return 0;
}