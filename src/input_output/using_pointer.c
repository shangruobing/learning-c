#include <stdio.h>

void interchange(int *, int *);

int main(void)
{
    int x = 3;
    int y = 9;

    // only exchange value, not exchange address.
    printf("%d  %d   %p   %p\n", x, y, &x, &y);
    interchange(&x, &y);
    printf("%d  %d   %p   %p\n", x, y, &x, &y);

    return 0;
}

void interchange(int *a, int *b)
{

    int temp;
    // exchange value on address.
    temp = *a;
    *a = *b;
    *b = temp;
}