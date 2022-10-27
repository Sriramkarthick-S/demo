#include<stdio.h>
void main()
{
    int a[5];
    char b[5];
    for(int i=0;i<5;i++)
     scanf("%d ",&a[i]);
    for(int i=0;i<5;i++)
     scanf("%c ",&b[i]);
    int *p=a;
    char *p1=b;
    for(int i=0;i<5;i++)
     printf("int address: %p int value: %d\n",(p+i),*(p+i));
    for(int i=0;i<5;i++)
     printf("char address: %p char value: %c\n",(p1+i),*(p1+i)); 
}