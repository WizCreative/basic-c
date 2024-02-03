#include <stdio.h>
// program to change km to m conversion
int main()
{
    float km,m;
    m=km*1000;
    printf("Enter distance in metre:");
    scanf("%f",&km);
    printf("Distance in metre = %fm",m);
}