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
    int max=0;
    printf("Enter employee details:\n");
    for(i=0; i<3; i++)
    {
        printf("Employee: %d\n",i+1);
        printf("Enter employee code: ");
        scanf("%d",&emp[i].code);
        printf("Enter employee name: ");
        scanf("%s",emp[i].name);
        printf("Enter employee salary: ");
        scanf("%f",&emp[i].salary);
    }
    printf("\nEmployee details:\n");
    for(i=0; i<3; i++){
        if(emp[i].salary >emp[max].salary){
            max=i;
        }
    }
        printf("Employee code:     %d\n",emp[max].code);
        printf("Employee name:     %s\n",emp[max].name);
        printf("Employee salary:   %.2f\n",emp[max].salary);
    return 0;
}