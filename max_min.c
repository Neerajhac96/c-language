#include<stdio.h>
int max(int min2,int max1);
int min(int min2,int max1);
int main(){
    int max1,min2,maximum,minimum;
    printf("ENter two number");
    scanf("%d%d",&max1,&min2);
    maximum=max(max1,min2);
    minimum=min(max1,min2);
    printf("Maximum %d\n",maximum);
    printf("Minimum %d ",minimum);
    return 0;
}
int max(int min2, int max1){
    if(max1>min2)
    return max1;
    else
    return min2;
}
int min(int min2, int max1){
    if(max1>min2)
    return min2;
    else
    return max1;
}