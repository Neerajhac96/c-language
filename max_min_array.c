#include<stdio.h>

int main(){
    int a[10],max,min;
    for(int i=0;i<10;i++){
        printf("Enter a number");
        scanf("%d",&a[i]);
    }
    max = a[0];
    min=a[0];
    for(int i=0;i<10;i++)
        if(a[i]>max){
        max=a[i];
        }
        else if(a[i]<min){
        min=a[i];
    }
    printf("%d %d",max,min);
    return 0;
}