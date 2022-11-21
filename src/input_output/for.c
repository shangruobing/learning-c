#include <stdio.h>
#define SIZE 10
int main(int argc, char const *argv[])
{
    int array[SIZE];
    printf("输入10个数字\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("刚刚输入的数字为：");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d  ", array[i]);
    }

    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        count += array[i];
    }
    printf("\n这些数字的和为：%d", count);

    return 0;
}
