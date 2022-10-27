#include<stdio.h>
void main()
{
    int a=10;
    int *ptr=&a;
    int **ptr1=&ptr;
    printf("%d\n%p\n%d\n%p\n%p\n%p\n%d",a,&a,*ptr,ptr,*ptr1,ptr1,**ptr1);
}