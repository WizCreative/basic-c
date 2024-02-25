#include <stdio.h>
int main()
{
    int a;
    int i;
    printf("Enter any number:");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a % i ==0)
        {
            printf("%d is a composite number",a);
            return 0;
        }
        
    }    
    printf("%d is a prime number",a);
    return 0;
}
