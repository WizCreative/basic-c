#include <stdio.h> //#include is a pre-processor director and stdio.h is aheader file
//add comments like this
/*or
like this */
#define pi 3.14
// define for fixed values such as pi
int a=1; //global variable outside function
int main()// main a reserved function name(identifier)
{
    int b;//local variable used only inside the function
    b=a;//value of a=1 transferred to b, now b=1 too
    printf("%d",b);//"%d" for decimal type output when run
    //and b is printed
}
