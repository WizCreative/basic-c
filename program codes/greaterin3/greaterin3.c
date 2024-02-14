#include <stdio.h>
//to find the greatest of 2 numbers
int main()
{
    int n1,n2,n3;
    printf("Enter any 3 numbers:\n");
    scanf("%d",&n1);    
    scanf("%d",&n2);    
    scanf("%d",&n3);    
    if (n1>n2 && n1>n3)
    {
       printf("%d is greater than %d and %d",n1,n2,n3);
    }
    else if (n1<n2 && n2>n3)
    {
       printf("%d is greater than %d and %d",n2,n1,n3);
    }
    else if (n3<n2 && n2<n3)
    {
       printf("%d is greater than %d and %d",n3,n1,n2);
    }
    else
    {
       printf("Some numbers are equal");
    }
    
}