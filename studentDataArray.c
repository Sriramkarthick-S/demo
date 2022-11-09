#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
}student;

void main()
{
    student student1 = {0};
    student student2 = {0};

    printf("Enter first student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student1.name, &student1.rollNo, student1.department, &student1.fees);
    printf("Enter second student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student2.name, &student2.rollNo, student2.department, &student2.fees);

    printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", student1.name, student1.rollNo, student1.department, student1.fees);
    printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", student2.name, student2.rollNo, student2.department, student2.fees);
}
