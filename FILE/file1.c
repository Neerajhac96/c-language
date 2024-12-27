#include <stdio.h>

// int main(){
//     char ch[10];
//     FILE *fp;
//     fp = fopen("myfile.txt", "r");
//     if(fp==NULL){
//         printf("Error opening file");
//         return 1;
//     }
//     printf("File opened successfully\n");
//     while(fgets(ch,9,fp)!=NULL){
//         printf("%s", ch);
//     }
//     fclose(fp);
// }

int main()
{
    char str[20];
    FILE *fp;
    fp = fopen("myfile.txt", "a");
    printf("Enter string in file: ");
    gets(str);
    fputs(str, fp);
    fclose(fp);
    fp = fopen("myfile.txt", "r");
    printf("File contents after appending:\n");
    while (fgets(str, 20, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}
