#include <stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int array[SIZE];
    printf("please input ten numbers...\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("just input numbers:");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", array[i]);
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        count += array[i];
    }
    printf("\n The sum of these numbers: %d", count);

    return 0;
}
