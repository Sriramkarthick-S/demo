#include<stdio.h>
struct employee
{
    char name[20];
    int age,id;
};
int main()
{
    struct employee *e1,e2;
    e1=&e2;
    scanf("%s %d %d",&e1->name,&e1->age,&e1->id);
    printf("Name: %s Age:%d id:%d\n",e1->name,e1->age,e1->id);
    printf("Name: %s Age:%d id:%d\n",e2.name,e2.age,e2.id);
}