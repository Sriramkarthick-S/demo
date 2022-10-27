#include<stdio.h>
 struct employee
    {
        char name[50];
        int age,id;
    };
void main()
{
   struct employee e1,e2,e3;
   scanf("%s\n%d\n%d",e1.name,&e1.age,&e1.id);
   scanf("%s\n%d\n%d",e2.name,&e2.age,&e2.id);
   scanf("%s\n%d\n%d",e3.name,&e3.age,&e3.id);
   printf("Name1: %s\nAge1: %d\nID1: %d\n",e1.name,e1.age,e1.id);
   printf("Name2: %s\nAge2: %d\nID2: %d\n",e2.name,e2.age,e2.id);
   printf("Name3: %s\nAge3: %d\nID3: %d",e3.name,e3.age,e3.id);
}