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
    int totalNumberOfStudents = 0;

    printf("Enter number of students: ");
    scanf("%d",&totalNumberOfStudents);

    Student student[totalNumberOfStudents];
    Student *studentHolder = student;

    for(int studentCount = 0; studentCount < totalNumberOfStudents; ++studentCount)
    {
    printf("Enter student %d name:\n", studentCount + 1);
    scanf("%s", (studentHolder + studentCount)->name);

    printf("Enter roll number:\n");
    scanf("%d", &(studentHolder + studentCount)->rollNo);

    printf("Enter department:\n");
    scanf("%s",(studentHolder + studentCount)->department);

    printf("Enter fees:\n");
    scanf("%d", &(studentHolder + studentCount)->fees);
    }

    for(int studentCount = 0; studentCount < totalNumberOfStudents; ++studentCount)
    {
    (studentHolder + studentCount)->PrintStudentFees = &PrintStudentFees;
    
    printf("%s's fees: ", (studentHolder + studentCount)->name);
    (studentHolder + studentCount)->PrintStudentFees((studentHolder + studentCount)->fees);
    }
}

void PrintStudentFees(int fees)
{
    printf("%d\n", fees);
}
