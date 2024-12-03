#include<stdio.h>

int main()
{
    int a[10],i,flag=0,key,pos;
    printf("Enter a number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&key);
    for(i=0;i<10;i++)
        if(a[i]==key)
        {
            flag=1;
            pos=i+1;
            break;
        }
    if(flag==1)
    printf("\nNumber Found at %d position.",pos);
    else
    printf("\nNumber Not Found ");
    return 0;
}