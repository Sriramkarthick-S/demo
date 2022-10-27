#include<stdio.h>
void main()
{
    int a,mask=1,zero=0,one=0;
    scanf("%d",&a);
    for(int i=0;i<8;i++)
    {
        if((a&mask)==0)
         zero++;
        else
         one++;
        a=a>>1;  
    }
    printf("Zero count=%d\nOne count=%d",zero,one);
}