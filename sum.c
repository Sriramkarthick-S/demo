#include<stdio.h>
int sum1(int a,int b)
{
    return a+b;
}
void main()
{
    int n1=1,n2=2,n3=3,n4=4;
    printf("%d",sum1(n1,n2)+sum1(n3,n4));
}