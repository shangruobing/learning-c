#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%-7d %-7d %-7d \n", 125, 2222, 3);
    printf("%-7d %-7d %-7d \n", 12345, 222, 333);
    printf("%-7d %-7d %-7d \n", 1235, 22222, 33);

    printf("%s", "print some information:\n\n");
    printf("%-8s %-3d %-7d \n", "尚若冰", 14, 12345);
    printf("%-8s %-3d %-7d \n", "岳姗", 33, 333333333);
    printf("%-8s %-3d %-7d \n", "李亮", 7, 6666);
    return 0;
}
