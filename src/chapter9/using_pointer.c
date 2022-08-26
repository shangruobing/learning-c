#include <stdio.h>

void interchange(int *, int *);

int main(void)
{
    int x = 3;
    int y = 9;
    //只交换值 不交换地址
    printf("%d  %d   %p   %p\n", x, y, &x, &y);
    interchange(&x, &y);
    printf("%d  %d   %p   %p\n", x, y, &x, &y);

    return 0;
}

void interchange(int *a, int *b)
{

    int temp;
    //互换地址上的值
    temp = *a;
    *a = *b;
    *b = temp;
}