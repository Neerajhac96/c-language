#include<stdio.h>
int main(){
    int arr[10],i;
    printf("Enter element in an array");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements in the array in reverse order are:");
    for(i=0;i<10;i++)
    printf("%d ",arr[9-i]);
}