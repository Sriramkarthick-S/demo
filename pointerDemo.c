#include<stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("a=%d\n",a);
    printf("p=%p\n",p);
    printf("address of a= %p\n",&a);
    printf("address of a= %d\n",&a);
    printf("*p= %d\n",*p);
    printf("%d\n",p);
    printf("%p\n",*p);
}