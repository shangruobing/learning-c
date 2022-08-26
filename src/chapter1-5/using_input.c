#include <stdio.h>

int main(void)
{
    /* code */
    float age = 3;
    float value;
    printf("请输入一个数字 : ");
    // scanf("%f", &age);
    value = age * 300;
    printf("input is %.2f ; output is %.4f", age, value);
    return 0;
}