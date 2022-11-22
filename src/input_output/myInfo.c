#include <stdio.h>
#define NAME "Ruobing Shang"
#define AGE 20
#define PHONE "13577070376"

void show_n_char(char ch, int num);
int main(int argc, char const *argv[])
{
    show_n_char('*', 30);
    putchar('\n');
    show_n_char(' ', 10);
    printf("%s\n", NAME);
    show_n_char(' ', 10);
    printf("%d\n", AGE);
    show_n_char(' ', 10);
    printf("%s\n", PHONE);
    show_n_char('*', 30);
    putchar('\n');

    return 0;
}

void show_n_char(char ch, int num)
{

    for (int i = 0; i < num; i++)
    {
        putchar(ch);
    }
}