#include <stdio.h>

// Function to find and print prime factors of a number
int main(){
    int n;
    printf("Number a number: ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        while(n%i == 0){
            printf("%d ",i);
            n/=i;
        }
    }
    return 0;
}