#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[5];
    printf("please input your name");
    gets(name);
    // printf("Your name:%s",name);
    puts(name);
    return 0;
}
