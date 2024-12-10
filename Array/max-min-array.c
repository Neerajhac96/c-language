#include<stdio.h>
int main(){
    int a[3][3];
    printf("Enter element in an array: ");
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
    int max=a[0][0];
    int min=a[0][0];
    printf("The entered elements are: \n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
        if(a[i][j]>max){
            max=a[i][j];
        }
    else if(a[i][j]<min){
        min=a[i][j];
    }
    printf("\n\nMaximum element: %d\nMinimum element: %d",max,min);
    return 0;
}
