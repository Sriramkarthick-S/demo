#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees; 
} Student;

void PrintStudent(Student *studentPrint)
{
    printf("Name: %s\nRollNo: %d\nDepartment: %s\nFees: %d",studentPrint->name, studentPrint->rollNo, studentPrint->department, studentPrint->fees);
}

void main()
{
    Student student1 = {0};
    Student *student2 = &student1;

    printf("Enter student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student2->name, &student2->rollNo, student2->department, &student2->fees);

   PrintStudent(student2);
}
