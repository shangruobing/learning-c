#include <stdio.h>
void add_to(int array[], int size, int number);
int main(void)
{

    int array[5] = {100, 200, 300, 400, 500};
    int size = 5;
    int number = 3;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nAfter add %d\n", number);
    add_to(array, size, number);
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    return 0;
}

void add_to(int array[], int size, int number)
{

    for (int i = 0; i < size; i++)
    {
        array[i] += number;
    }
}