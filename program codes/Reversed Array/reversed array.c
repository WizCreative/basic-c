#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter elements to the array: ");
        scanf("%d",&arr[i]);
    }
    printf("Reversed array is :");
    for(int i=n;i>n;i--)
    {
        printf("%d",arr[i]);
    }
}