#include<stdio.h>

int main(){
    int a[10],fre=0,key;
    printf("Enter value in array: \n");
    for(int i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    printf("Enter a number to find Frequency: ");
    scanf("%d",&key);
    for(int i = 0; i < 5;i++){
    if(a[i] ==key)
    fre++;
}
    printf("Frequency of %d is %d",key,fre);
    return 0;
}