#include<stdio.h>

int staticIncrement()
{
    static int c=0;
    c++;
    return c;
}

int increment()
{
    int a = 0;
    a++;
    return a;
}
void main()
{
    printf("%d ", staticIncrement());
    printf("%d ", staticIncrement());
    printf("%d ", increment());
    printf("%d ", increment());
}