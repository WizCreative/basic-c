#include <stdio.h>
//program to print area 
int main()
{
    float l,b,a;
    a=l*b;
    printf("Enter l and b:");
    scanf("%f%f",&l,&b);
    // %f is used to input a float value and an & is used before the variable in scan function
    // %f is used twice because 2 variable have been inputed
    printf("Area =%f",a);
    return 0;
}