#include<stdio.h>
int odd_even(int n);
int main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    odd_even(x);
    // printf("%d",&x);
    return 0;
}
int odd_even(int n){
    if(n%2==0)
    printf("even");
    else printf("odd");
}