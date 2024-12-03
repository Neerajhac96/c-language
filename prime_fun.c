#include <stdio.h>
void prime(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count==2)
    printf("prime");
    else
    printf("%d is not prime" ,num);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}