#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        int found=0;
        for(int j=0;j<len;j++)
        {
            if(str[i]==str[j] && i!=j){
                found=1;
                break;
            }
        }
        if(found==0){
            printf("%c",str[i]);
        return 0;
        }
    }
    printf("No unique characters found\n");
    return 0;
}