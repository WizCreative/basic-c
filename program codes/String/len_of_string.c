// length of string without strlen() function
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);

    char c=' ';
    int len=0;
    while (c!='\0')
    {
        c=str[len];
        len++;
    }
    printf("The length: %d",len-1);
}