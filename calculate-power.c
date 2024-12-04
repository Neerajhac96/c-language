#include<stdio.h>
int Pow(int n){
    if(n==0)
        return 1;
    else
        return (n*n); 
}
int main(){
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result=Pow(n);
    printf("Power is %d",result);
    return 0;
}