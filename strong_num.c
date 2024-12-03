#include <stdio.h>

int main()
{
    int n,fact=1,sum=0,rem,num;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;
    while(n){
        rem=n%10;
        fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==num){
        printf("strong");
    }
    else
    {
        printf("not strong");
    }
    return 0;
}
