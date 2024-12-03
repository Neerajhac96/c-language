#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping: %d=a %d=b",a,b);
}