#include <stdio.h>

void main()
{
    int number = 5;
    void *voidPointer = &number;

    printf("%d", *(int*)voidPointer);
}
