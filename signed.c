#include<stdio.h>
void main()
{
    for(int i=-128;;i++)//signed range
    {
        printf("%d\n",i);
        if(i>127)
         i=-128;
    }
}