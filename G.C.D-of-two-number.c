#include<stdio.h>
int GCD(int x, int y){
    while(y!=0){
        int temp = y;
        y = x % y;
        x = temp;
    }
}
int main(){
    int a,b,i,j,num1,num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Greatest common divisor is: %d ",GCD(a,b));
    return 0;
}