#include <stdio.h>
#include <string.h>
#define name "ruobing"

int main(int argc, char const *argv[])
{
    char array[30];
    char string;
    printf("input chars\n");
    scanf("%s %c", array, &string);
    printf("%s %c", array, string);
    return 0;
}
