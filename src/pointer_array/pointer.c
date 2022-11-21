#include <stdio.h>
int main(void)
{

    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d,&ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    return 0;
}