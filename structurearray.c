#include<stdio.h>
struct employee
{
    char name[20];
    int age,id;
};
void main()
{
    struct employee e[5];
    for(int i=0;i<5;i++)
    {
        scanf("%s",e[i].name);
        scanf("%d",&e[i].age);
        scanf("%d",&e[i].id);
    }
    for(int i=0;i<5;i++)
    {
        printf("Name: %s\n",e[i].name);
        printf("Age: %d\n",e[i].age);
        printf("ID: %d\n",e[i].id);
    }
}