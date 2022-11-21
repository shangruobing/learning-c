#include <stdio.h>
void usingFun(void);

int main(void)
{
    int feet = 3;
    int mile;
    mile = feet * 3;
    usingFun();
    printf("%d mile is %d", feet, mile);
    return 0;
}

void usingFun(void)
{
    printf("Using the function: usingFun \n");
}
