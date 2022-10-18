#include<stdio.h>
void main()
{
    int n;
    char s;
    scanf("%d %c",&n,&s);
    char* sadr=&s;
    int *adr=&n;
    printf("integer address: %p\ninteger value: %d\n",adr,*adr);
    printf("character address: %p\ncharacter value: %c",sadr,*sadr);
}