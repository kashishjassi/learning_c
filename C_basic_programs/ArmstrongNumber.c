#include<stdio.h>
int main()
{
    int a,n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&a);
    n=a;
    while(n!=0)
    {
        i=n%10;
        sum= sum + i*i*i;
        n=n/10;

    }
    if(sum==a)
        printf("%d Number is Armstrong",a);
    else
        printf("%d is NOT Armstrong",a);
}
