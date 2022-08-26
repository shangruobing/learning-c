#include <ctype.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{

    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            putchar(ch + 1);
        }
        else
        {
            putchar(ch);
        }
    }
    putchar(ch);

    return 0;
}
