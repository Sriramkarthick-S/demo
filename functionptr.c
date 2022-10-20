#include<stdio.h>
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int output;
    int (*ptr)(int,int)=&add;
    output=ptr(2,3);
    printf("%p\n",&output);
    printf("%d",output);
}