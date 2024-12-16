#include <string.h>
#include<stdio.h>
int main(){
    char str[20];
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str)/2;i++)
    if(str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='I' || str[i]=='U' ||
    str[i]=='a' || str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u'){
        int temp = str[i];
        str[i] = str[strlen(str)-i-1];
        str[strlen(str)-i-1] = temp;
    }
    for(int i = 0; i<strlen(str); i++){
        printf("%c", str[i]);
    }
    return 0;

}

