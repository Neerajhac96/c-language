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
    scanf("%s%d%f%c%d",st1.name,st1.ID,st1.cse_marks,st1.gender,st1.phone_no);
    struct student st2={"dheeraj",543,13.5,'M',1939494};
    
    printf("name: %s ID: %d CSE marks: %.1f GEnder: %c Phone: %d\n",st1.name,st1.ID,st1.cse_marks,st1.gender,st1.phone_no);
    printf("name: %s ID: %d CSE marks: %.1f GEnder: %c Phone: %d\n",st2.name,st2.ID,st2.cse_marks,st2.gender,st2.phone_no);
    return 0;
}