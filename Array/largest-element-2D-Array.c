#include<stdio.h>
int main(){
    int a[2][2];
    printf("Enter element in an array: ");
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
    int largest=a[0][0];
    printf("The entered elements are: \n");
    for(int i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
    if(a[i][j]>largest){
        largest=a[i][j];
    }
    printf("\n\nThe largest element is: %d",largest);
    return 0;
}