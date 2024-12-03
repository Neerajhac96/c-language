#include<stdio.h>
void check(int);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    check(num);
}
void check(int a){
    if(a%2==0)
        printf("%d is an even number",a);
    else
        printf("%d is an odd number",a);
}