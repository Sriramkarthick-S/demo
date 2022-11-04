#include <stdio.h>

typedef struct Student
{
    char studentName[20];
    int rollNo;
    char department[20];
    int fees; 
}student;

void main()
{
    student student1 = {0};

    printf("Enter student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student1.studentName, &student1.rollNo, student1.department, &student1.fees);

    printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", student1.studentName, student1.rollNo, student1.department, student1.fees);
}
