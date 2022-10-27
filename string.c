#include<stdio.h>
void main()
{
    char str[100];
    int count=0;
    scanf("%s",str);
    printf("%s\n",str);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("%d\n",count);
}