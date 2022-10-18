#include<stdio.h>
void main()
{
    int age=10;
    int *ptr=&age;
    printf("%p\n",ptr);
    printf("%p\n",&age);
    printf("%d\n",*ptr);
}