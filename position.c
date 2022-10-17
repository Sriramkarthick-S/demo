#include<stdio.h>
void main()
{
    int n,sum=0,ch=1;
    scanf("%d",&n);
    n=n>>3;
    sum=sum+((n&ch)*1);
    n=n>>1;
    sum=sum+((n&ch)*2);
    printf("%d",sum);
}