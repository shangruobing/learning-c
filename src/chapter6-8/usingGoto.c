#include <stdio.h>
#define isGoto 0
int main(int argc, char const *argv[])
{

    if (isGoto)
    {
        goto gotoLabel;
    }
    else
        printf("正常执行流程");

gotoLabel:
    printf("进入了goto 语句");

    return 0;
}