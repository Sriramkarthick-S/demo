#include<stdio.h>
void main()
{
    int a,b=0,arr[10],zero=0,one=0,mask=1;
    scanf("%d",&a);
    for(int i=0;i<8;i++)
    {
        b=(b*10)+(a%2);
        arr[i]=b;
        b=0;
        a=a/2;
    }
    for(int i=7;i>=0;i--)
    {
        if((arr[i]&mask)==0)
         zero++;
        else
         one++; 
    }
    printf("Zeros count=%d\nOnes count=%d",zero,one);
}