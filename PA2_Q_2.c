/******************************************************************************

@amnolan

*******************************************************************************/
#include <stdio.h>

// global variables
int a, b;

int fun(){
    a = a + 10;
    return a;
}

int main()
{
    
    a = 10;
    b = a + fun();
    printf("With the function call on the right, ");
    printf(" b is: %d\n", b);
    a = 10;
    b = fun() + a;
    printf("With the function call on the left, ");
    printf(" b is: %d\n", b);

    return 0;
}
