#include <stdio.h>

void PrintStudentFees(int);

void PrintStudentFees(int fees)
{
    printf("%d", fees);
}

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[10];
    int fees;
    void (*PrintFees)(int);
} Student;

void main()
{
    Student student1;

    printf("Enter name:\n");
    scanf("%s", student1.name);

    printf("Enter roll number:\n");
    scanf("%d", &student1.rollNo);

    printf("Enter department:\n");
    scanf("%s",student1.department);

    printf("Enter fees:\n");
    scanf("%d", &student1.fees);

    student1.PrintFees = &PrintStudentFees;
    
    printf("%s's fees: ", student1.name);
    student1.PrintFees(student1.fees);
}
