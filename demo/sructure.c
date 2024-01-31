#include <stdio.h> //#include is a pre-processor director and stdio.h is aheader file
//add comments like this
/*or
like this */
#define pi 3.14
int a=1; //global variable outside function
int main()
{
    int b;//local variable used only inside the function
    b=a;
    printf("%d",b);
}
