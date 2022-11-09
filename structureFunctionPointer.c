#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[10];
    int fees;
    int (*PrintFees)(int);
    int (*PrintStudentFees)(int);
} Student;

int PrintStudentFees(int);

void main()
{
    Student student;

    printf("Enter name:\n");
    scanf("%s", student.name);

    printf("Enter roll number:\n");
    scanf("%d", &student.rollNo);

    printf("Enter department:\n");
    scanf("%s",student.department);

    printf("Enter fees:\n");
    scanf("%d", &student.fees);

    student.PrintFees = &PrintStudentFees;
    student.PrintStudentFees = &PrintStudentFees;
    
    printf("Fees amount: %d", student.PrintFees(student.fees));
    printf("Fees amount: %d", student.PrintStudentFees(student.fees));
}

int PrintStudentFees(int fees)
{
    return fees;
}
