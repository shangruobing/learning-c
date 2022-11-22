#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("float stores the maximum number of bytes : %lu \n", sizeof(float));
    printf("float minimum value: %E\n", FLT_MIN);
    printf("float maximum value: %E\n", FLT_MAX);
    printf("float precision: %d\n", FLT_DIG);

    return 0;
}