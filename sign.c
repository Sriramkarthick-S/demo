#include<stdio.h>

void main()
{
    for(int i=0;;i++)//unsigned range
    {
        printf("%d\n",i);
        if(i>255)
         i=0;
    }
    
}