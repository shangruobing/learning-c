#include <stdio.h>

// use precompilation directive

#define NAME "ruobing"

// function declaration
void years(void);

void name(void);

int main(void)
{
    printf("Hello, World! C Language \n");
    years();
    name();
    return 0;
}

/* function implement */
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