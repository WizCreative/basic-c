#include <stdio.h>
// program for calculator using if and else conditionals- a menu driven program
int main()
{
    printf("M E N U \n");
    printf("1. Add\n");
    printf("2. Subtact\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    int ch;
    float a,b;
    printf("Enter first number:");
    scanf("%f",&a);
    printf("Enter second number:");
    scanf("%f",&b);
    printf("Enter your choice[1,2,3,4]: ");
    scanf("%d",&ch);
    if (ch==1)
    {
        printf("Sum = %f",a+b);
    }
    else if (ch==2)
    {
        printf("Difference = %f",a-b);
    }
    else if (ch==3)
    {
        printf("Product = %f",a*b);
    }
    else if (ch==4)
    {
        if (b==0.0)
        {
            printf("NOT DIVISIBLE");
        }
        else
        {
            printf("Quotient = %f",a/b);
        }
    }
    else
    {
        printf("Wrong Option");
    }
    return 0;
}