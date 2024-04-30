#include<stdio.h>
int main()
{
    int n,sum=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    printf("Factorial of %d is %d",n,sum);
}