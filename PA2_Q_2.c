/******************************************************************************

@amnolan

*******************************************************************************/
#include <stdio.h>

// global variables
int a, b;

// fun() simply adds 10 to a global variable
int fun(){
    a = a + 10;
    return a;
}

int main()
{
    // start with 10
    a = 10;
    // associativity left to right initially a is 10, so (10 + (10+10)) = 30
    b = a + fun();
    printf("With the function call on the right, ");
    printf(" b is: %d\n", b);

    // again initially starting with 10
    a = 10;
    // associativity states left to right, function addds the value right away (10 + 10) + (10 + 10) = 40
    b = fun() + a;
    printf("With the function call on the left, ");
    printf(" b is: %d\n", b);

    return 0;
}
