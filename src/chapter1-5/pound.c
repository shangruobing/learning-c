#include <stdio.h>
void pound(int n);
int main(int argc, char const *argv[])
{
    int num = 0;
    printf("the number of input\n");
    scanf("%d", &num);
    pound(num);
    return 0;
}

void pound(int n)
{
    while (n-- > 0)
    {
        printf("$");
    }
    printf("\n");
}
