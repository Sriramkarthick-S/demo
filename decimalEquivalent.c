#include<stdio.h>
void main()
{
    int input=0;
    scanf("%x",&input);
    int bitmask=24;
    int maskedbits=input&bitmask;
    int shiftedbits=maskedbits>>3;
    printf("Decimal equivalent: %d",shiftedbits);
}