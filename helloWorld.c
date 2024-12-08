#include<stdio.h>

struct employee{
    int d,m,y;
};
int main(){
    struct employee a;
    printf("Enter today's date");
    scanf("%d/%d/%d",&a.d,&a.m,&a.y);
    printf("Today's date is: %d/%d/%d",a.d,a.m,a.y);

}