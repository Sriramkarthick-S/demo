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
    Student *studentHolder = &student;

    printf("Enter name:\n");
    scanf("%s", studentHolder->name);

    printf("Enter roll number:\n");
    scanf("%d", &studentHolder->rollNo);

    printf("Enter department:\n");
    scanf("%s",studentHolder->department);

    printf("Enter fees:\n");
    scanf("%d", &studentHolder->fees);

    studentHolder->PrintStudentFees = &PrintStudentFees;
    
    printf("%s's fees: ", studentHolder->name);
    studentHolder->PrintStudentFees(studentHolder->fees);
}

void PrintStudentFees(int fees)
{
    printf("%d", fees);
}
