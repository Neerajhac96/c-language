#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
    float marks[5];
};
void print_marks(float arr[5])
{
    printf("Marks of the student:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Subject %d: %.2f\n", i + 1, arr[i]);
    }
}
float average_marks(float arr[5])
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    return sum / 5;
}
void print_name_age(struct student std)
{
    printf("Student Name: %s\n", std.name);
    printf("Age: %d\n", std.age);
}

int main()
{
    struct student std[2];
    int i, j;
    printf("Enter student details:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Student: %d\n", i + 1);
        printf("Enter Student name: ");
        scanf("%s", std[i].name);
        printf("Enter Age: ");
        scanf("%d", &std[i].age);
        printf("Enter Student Marks: ");
        for (j = 0; j < 5; j++)
            scanf("%f", &std[i].marks[j]);
    }
    printf("\nDisplaying Student Details:\n");
    for (i = 0; i < 2; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        print_name_age(std[i]);
        print_marks(std[i].marks);
        float avg = average_marks(std[i].marks);
        printf("Average Marks: %.2f\n", avg);
    }
    return 0;
}