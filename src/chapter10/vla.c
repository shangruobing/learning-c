#include <stdio.h>
#define ROW 2
#define COLUMN 3
#define NUMBER 3
void add_to(int row, int column, int array[row][column], int number);
int main(void)
{

    int array[2][3] = {{100, 200, 300},
                       {400, 500, 600}};

    printf("The size of this array is %d\n", (sizeof array) / (sizeof array[0]));
    printf("[");
    for (int i = 0; i < ROW; i++)
    {
        printf("[");

        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("]");
    }
    printf("]");

    printf("\nAfter add %d\n", NUMBER);
    add_to(ROW, COLUMN, array, NUMBER);

    printf("[");
    for (int i = 0; i < ROW; i++)
    {
        printf("[");

        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %d ", array[i][j]);
        }
        printf("]");
    }
    printf("]");

    return 0;
}

void add_to(int row, int column, int array[row][column], int number)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] += number;
        }
    }
}