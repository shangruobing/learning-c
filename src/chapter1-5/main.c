#include <stdio.h>
//利用预编译指令指定姓名
#define NAME "ruobing"

//函数声明
void years(void);

void name(void);

int main(void)
{
    printf("Hello, World! C Language \n");
    years();
    name();
    return 0;
}

/*函数实现*/
void years(void)
{
    int weeks;
    weeks = 56;
    printf("One year has %d weeks\n", weeks);
}

void name(void)
{
    printf(NAME);
}