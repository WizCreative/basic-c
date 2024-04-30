#include<stdio.h>
int n,i,sum;
int main()
{
    printf("Enter number of elements in array: \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the value:\n");
        scanf("%d",&arr[i]);
    }
    printf("The elements are: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of elements in the array: %d",sum);
}