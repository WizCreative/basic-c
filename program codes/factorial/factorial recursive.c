#include<stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}
// slower compared to iterative henceforth not professionaly recommended