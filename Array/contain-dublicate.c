#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[10],i,n;
    printf("Enter the size of an array");
    scanf("%d",&n);
    printf("ENter element in an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nDuplicates are: ");
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                break;
            }
        }
    }
    return 0;
}