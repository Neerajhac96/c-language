#include <stdio.h>
#include <string.h>
int main(){
    int x=printf("hello");
    printf(" %d",x);
    return 0;  // Expected output: 5, hello printed and x=5 returned
}