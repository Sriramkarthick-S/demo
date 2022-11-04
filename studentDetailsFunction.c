#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees; 
} Student;

void PrintStudent(Student studentPrint)
{
    printf("Name: %s\nRollNo: %d\nDepartment: %s\nFees: %d",studentPrint.name, studentPrint.rollNo, studentPrint.department, studentPrint.fees);
}

void main()
{
    Student student1 = {0};

    printf("Enter student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student1.name, &student1.rollNo, student1.department, &student1.fees);

   PrintStudent(student1);
}
