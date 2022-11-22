#include <stdio.h>

// declare variabls outside the function.
int x;
int y;
int addtwonum()
{
    // Variabs x and y are external variable.
    extern int x;
    extern int y;
    x = 1;
    y = 2;
    return x + y;
}

int main()
{
    int result;
    result = addtwonum();

    printf("result : %d", result);
    return 0;
}