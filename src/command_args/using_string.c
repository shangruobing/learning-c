#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[5];
    printf("输入你的姓名");
    gets(name);
    // printf("你输入的姓名:%s",name);
    puts(name);
    return 0;
}
