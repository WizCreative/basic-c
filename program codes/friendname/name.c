#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    // name[25] indicates that 25 spaces are there in memory to fill in the name
    printf("Enter friend name:");
    // & is not neccessary in scan function because data type is string
    scanf("%s",name);
    // %s to indicste ouput datatype and then variable name
    printf("Hello %s !",name);
}