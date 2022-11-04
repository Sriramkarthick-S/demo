#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} student;

void main()
{
    student details[2] = {0};
    student *pointer = &details;

    printf("Enter student details(name,rollno,department,fees):");
    for(int i=0; i<2; i++)
     scanf("%s%d%s%d", pointer[studentCount]->name, &pointer[studentCount]->rollNo, pointer[studentCount]->department, &pointer[studentCount]->fees);
    
    for(int i=0; i<2; i++)
     printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", pointer[studentCount]->name, pointer[studentCount]->rollNo, pointer[studentCount]->department, pointer[studentCount]->fees);
}