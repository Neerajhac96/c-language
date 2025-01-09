#include<stdio.h>
#include<string.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main(){
    struct book b1;
    FILE *fp;
    fp=fopen("myfile.dat", "ab");
    printf("Enter bookid, title and price");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1, sizeof(b1),1,fp);
    fclose(fp);
    printf("Book added successfully\n");
    // fp=fopen("myfile.dat", "rb");
    printf("Book details:\n");
    while(fread(&b1, sizeof(b1),1,fp)>0);{
    printf("Book id: %d\nTitle: %s\nPrice: %.2f", b1.bookid, b1.title, b1.price);
    }
    fclose(fp);

}