#include <stdio.h>
#define isGoto 0
int main(int argc, char const *argv[])
{

    if (isGoto)
    {
        goto gotoLabel;
    }
    else
        printf("Execute process normally.");

gotoLabel:
    printf("Execute goto statement.");

    return 0;
}