#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int length;
    printf("Enter name: ");
    gets(name);
    length=strlen(name);
    printf("name: %d",length);
    return 0;
}
