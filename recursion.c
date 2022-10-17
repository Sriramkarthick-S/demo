#include<stdio.h>
void main()
{
    sum(10);
}
int sum(int s)
{
    if(s>0)
    {
        return s+sum(s-1);
    }
    else
     return 0;
}