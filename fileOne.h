#include<stdio.h>

int a = 5;
static int b = 5;
extern int c = 5;

int increment(int d)
{
    printf("%d ",d++);
}