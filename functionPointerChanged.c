#include <stdio.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[10];
    int fees;
    void (*PrintStudentFees)(int fees);
} Student;

void PrintStudentFees(int fees);

void main()
{
    Student student = {0};

    printf("Enter name:\n");
    scanf("%s", student.name);

    printf("Enter roll number:\n");
    scanf("%d", &student.rollNo);

    printf("Enter department:\n");
    scanf("%s",student.department);

    printf("Enter fees:\n");
    scanf("%d", &student.fees);

    student.PrintStudentFees = &PrintStudentFees;
    
    printf("%s's fees: ", student.name);
    student.PrintStudentFees(student.fees);
}

void PrintStudentFees(int fees)
{
    printf("%d", fees);
}
