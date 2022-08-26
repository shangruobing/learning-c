#include <stdio.h>

int findMax(int num1, int num2);
int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 9;
    printf("in %d and %d, %d is Max.\n", num1, num2, findMax(num1, num2));
    return 0;
}

int findMax(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}