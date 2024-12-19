#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[10];
    printf("ENter element in an array");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Entered array in reverse order is: ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    bool flag = false;
    for(int i=0;i<9;i++)
    if(arr[i]==i){
        flag=true;
        break;
    }
    if(flag==1){
        printf("It contains the duplicate ");
    }
    else{
        printf("No duplicate found");
    }
}