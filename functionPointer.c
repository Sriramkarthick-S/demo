#include <stdio.h>

void add(int, int);

void add(int input1, int input2)
{
    printf("%d", input1 + input2);
}

void main()
{
    void (*addHandler)(int, int) = &add;

    (addHandler)(5,3);
}
