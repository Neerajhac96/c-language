#include <stdio.h>

int prime(int n);
int arm(int n);
int perfect(int n);

int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    prime(i);
    arm(i);
    perfect(i);
    return 0;
}
int prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        printf("prime\n");
    else
        printf("not prime\n");
}
int arm(int n){
    int num,rev=0,rem;
    num=n;

    while(n>0){
        rem=n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    // return (num==rev);
    if(num==rev)
    printf("armstrong \n");
    else
    printf("Not armstrong\n");
}

int perfect(int n){
    int num,sum=0;
    num=n;
    for(int i=1;i<n;i++){
        if(n%i==0)
        sum=sum+i;
    }
    if(num==sum)
    printf("%d is perfect",num);
    else 
    printf("%d is Not perfect",num);
}