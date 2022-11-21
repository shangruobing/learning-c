#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return 0;
}
