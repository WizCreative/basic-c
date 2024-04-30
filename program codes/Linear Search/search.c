#include <stdio.h>
int main()
{
    int n,key,position,flag=0;
    printf("Enter number of elements in the array: \n");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        printf("Enter the value:\n ");
        scanf("%d",&arr[i]);
    }

    printf("Enter key to be searched: ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            position=i+1;
            flag++;
            break;
        }

        if(flag==1)
        {
            printf("Found %d at %d,key,position");
        }
        else
        {
            printf("Element not found in Array");
        }
    }
}