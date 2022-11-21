#include <stdio.h>
#define row 2
#define column 3
#define Number 3
void add_to(int array[][column], int size, int number);
int main(void)
{

    int array[2][3] = {{100, 200, 300},
                       {400, 500, 600}};

    printf("The size of this array is %d\n", (sizeof array) / (sizeof array[0]));
    printf("[");
    for (int i = 0; i < row; i++)
    {
        printf("[");

        for (int j = 0; j < column; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("]");
    }
    printf("]");

    printf("\nAfter add %d\n", Number);
    add_to(array, row, Number);

    printf("[");
    for (int i = 0; i < row; i++)
    {
        printf("[");

        for (int j = 0; j < column; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("]");
    }
    printf("]");

    return 0;
}

void add_to(int array[][column], int size, int number)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] += number;
        }
    }
}