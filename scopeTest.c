#include<stdio.h>

void main()
{
    int globalVariable;
    static int staticVariable;
    printf("%d ", globalVariable);
    printf("%d ", staticVariable);
}