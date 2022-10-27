#include<stdio.h>
int add(int x,int y)
{
    int sum=x+y;
    return sum;
}
int sub(int x,int y)
{
    int dif=x-y;
    return dif;
}
int mul(int x,int y)
{
    int pro=x*y;
    return pro;
}
int div(int x,int y)
{
    int quo=x/y;
    return quo;
}
void main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n%d\n%d\n%d",add(a,b),sub(a,b),mul(a,b),div(a,b));
}