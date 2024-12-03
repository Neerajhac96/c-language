#include<stdio.h>
#include<string.h>
int main(){
    char copy[30],paste[30];
    printf("Enter name: ");
    gets(copy);
    strcpy(paste,copy);
    printf("the name is (paste as):\t");
    puts(paste);
    return 0;
}
