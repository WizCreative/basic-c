#include<stdio.h>
int main()
{
    int n;
    int n,key,position,flag=0;
    printf("Enter number of elements in the array: \n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the value:\n ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("The Sorted Array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

}