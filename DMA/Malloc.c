#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i,*ptr;
    printf("Enter the number of size");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter a number: ");
        scanf("%d",ptr+i);
    }

    printf("The numbers entered are: ");
    for(i=0;i<n;i++)
        printf("%d ",*(ptr+i));
    
    return 0;
}