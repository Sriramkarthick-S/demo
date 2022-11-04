#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees; 
} Student;

void StudentDetails()
{
    Student student1 = {0};
    printf("Enter student details(name,rollno,department,fees):");
    scanf("%s%d%s%d", student1.name, &student1.rollNo, student1.department, &student1.fees);

    printf("Name: %s\nRollNo: %d\nDepartment: %s\nFees: %d",student1.name, student1.rollNo, student1.department, student1.fees);
}

void main()
{
   StudentDetails();
}
