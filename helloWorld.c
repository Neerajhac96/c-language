#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    char name[50];
    float salary;
};
int main(){
    struct employee emp[3];
    int i;
    printf("Enter employee details:\n");
    for(i=0; i<3; i++)
    {
        printf("Employee %d:\n",i+1);
        printf("Enter employee code: ");
        scanf("%d",&emp[i].code);
        printf("Enter employee name: ");
        scanf("%s",emp[i].name);
        printf("Enter employee salary: ");
        scanf("%f",&emp[i].salary);
    }
    printf("\nEmployee details:\n");
    for(i=0; i<3; i++)
    {
        printf("Detail of Employee %d:\n",i+1);
        printf("Employee code:     %d\n",emp[i].code);
        printf("Employee name:     %s\n",emp[i].name);
        printf("Employee salary:   %.2f\n",emp[i].salary);
    }
    return 0;
}