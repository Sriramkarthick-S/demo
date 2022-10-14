#include<stdio.h>
void main()
{
    int n=12,a[10],b;
    if(n!=0)
    {
        b=(b*10)+(n%2);
        n=n/2;
    }
    for(int i=0;i<10;i++)
    {
        a[i]=b%10;
        b=b/10;
    }
    for(int i=0;i<10;i++)
    {
       if(a[i])
    }
}