#include <stdio.h>

int main(void)
{
    int num = 8;
    int power = 0;
    int cube = 0;

    power = num * num;
    cube = num * power;
    printf("num is %d power is %d cube is %d", num, power, cube);
    return 0;
}
