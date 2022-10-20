#include<stdio.h>
void main()
{
    int a[5];
    for(int i=0;i<5;i++)
     scanf("%d",&a[i]);
    int *p=a;
    for(int i=0;i<5;i++)
     printf("%p ",*(p+i));
}