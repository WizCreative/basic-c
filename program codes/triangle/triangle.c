#include <stdio.h>
// program to find 3rd angle of a triangle
int main()
{
    float a1,a2,a3;
    printf("Enter both angles of a triangle:");
    scanf("%f%f",&a1,&a2);
    a3=180-(a1+a2);
    printf("3rd angle of the triangle = %f",a3);
    return ;
}