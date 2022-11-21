#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 1;
    while (num < 21)
    {
        printf("number is %-4d  power is %-4d  cube is %-4d\n", num, num * num, num * num * num);
        num = num + 1;
    }

    return 0;
}
