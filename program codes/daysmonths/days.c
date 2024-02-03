#include <stdio.h>
// convert days to months
int main()
{
    float months;
    int day;
    months=day/30;
    int days=months;
    int dayz=months-days;
    printf("Enter number of days:");
    scanf("%d",&day);
    printf("It has %d months and %d days",days,dayz);
    return 0;
}