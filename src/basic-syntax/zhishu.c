#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num = 1;
    int count = 1;
    while (count <= 64)
    {
        printf("%-4d  指数 %.2e\n", count, num);
        num = num * 2.0;
        count++;
    }

    return 0;
}
