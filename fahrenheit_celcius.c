#include<stdio.h>

int main(){
    int c,f;
    printf("Enter a number: ");
    scanf("%d", &f);
    c=((f-32)*5/9);
    printf("%d",c);
    return 0;
}