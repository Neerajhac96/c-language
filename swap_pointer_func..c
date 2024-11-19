#include <stdio.h>
int swap(int *,int *);

int main() {
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("After swapping: a = %d and b = %d", a, b);
    return 0;
}

int swap(int *x, int *y){
    int temp;
    temp=*x;
    *x = *y;
    *y = temp;
}
