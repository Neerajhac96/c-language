#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*ptr;
    printf("ENter the size the element");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",ptr+i);
    }
    printf("The entered elements are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(ptr+i));
    }
    printf("sizeof ptr: %d",sizeof(ptr));
    return 0;
}