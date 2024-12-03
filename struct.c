#include<stdio.h>
struct student
{
    char name[50];
    int ID;
    float cse_marks;
    char gender;
    long int phone_no;

};
int main(){
    struct student st1;
    printf("Enter Employee Name: ");
    fgets(st1.name, sizeof(st1.name), stdin);
    printf("Enter ID Number");
    scanf("%d",&st1.ID);
    printf("Enter CSE Marks: ");
    scanf("%f",&st1.cse_marks);
    printf("Enter Gender (M/F): ");
    scanf(" %c",&st1.gender);
    printf("ENter phone number: ");
    scanf("%d",&st1.phone_no);
    printf("\nEmployee Details:\n");
    printf("Name:         %s",st1.name);
    printf("ID:           %d\n",st1.ID);
    printf("CSE Marks:    %.2f\n",st1.cse_marks);
    printf("Gender:       %c\n",st1.gender);
    printf("Phone Number: %ld\n",st1.phone_no);


    return 0;
}