#include <stdio.h>
#define SIZE 4
int main(int argc, char const *argv[])
{

    short array1[SIZE];
    double array2[SIZE];
    short *pointer1;
    double *pointer2;
    pointer1 = array1;
    pointer2 = array2;
    printf("%25s %15s\n", "short", "double");

    for (int i = 0; i < SIZE; i++)
    {
        printf("pointer + %d  %10p  %10p \n", i, pointer1 + i, pointer2 + i);
    }
    return 0;
}