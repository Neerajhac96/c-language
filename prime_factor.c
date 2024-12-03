#include <stdio.h>

// Function to find and print prime factors of a number
int main(){
    int n;
    scanf("%d",&n);
    for(int i=2;n>i;i++){
        while(n%i == 0){
            printf("%d ",i);
            n/=i;
        }
    }
    return 0;
}