#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

void main()
{
    Student student1 = {0};
    Student *studentOne = &student1;

    Student student2 = {0};
    Student *studentTwo = &student2;

    printf("Enter first student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", studentOne->name, &studentOne->rollNo, studentOne->department, &studentOne->fees);

    printf("Enter second student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", studentTwo->name, &studentTwo->rollNo, studentTwo->department, &studentTwo->fees);
    
    printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", studentOne->name, studentOne->rollNo, studentOne->department, studentOne->fees);
    printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", studentTwo->name, studentTwo->rollNo, studentTwo->department, studentTwo->fees);
}
