#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc - 1 == 0)
    {
        printf("Don't have extra argument.\n");
        printf("argc=%d \n", argc);
        printf("arg=%s \n", argv[0]);
    }
    else
    {
        printf("argc=%d \n", argc);
        for (int i = 0; i < argc; i++)
        {
            printf("%d %s \n", i, argv[i]);
        }
    }
    return 0;
}
