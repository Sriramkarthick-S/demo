#include<stdio.h>
 struct employee
    {
        char name[50];
        int age,id;
    };
void main()
{
   struct employee e1;
   scanf("%s\n%d\n%d",e1.name,&e1.age,&e1.id);
   printf("Name: %s\nAge: %d\nID: %d",e1.name,e1.age,e1.id);
}