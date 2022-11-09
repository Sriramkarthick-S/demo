#include <stdio.h>

void main()
{
    int number = 5;
    int *pointer = (int*)malloc(sizeof(int));
    
    pointer = &number;
    free(pointer);

    printf("%d", *pointer);
}
