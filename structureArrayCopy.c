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
    scanf("%s", student[studentCount].name);

    printf("Enter roll number:\n");
    scanf("%d", &student[studentCount].rollNo);

    printf("Enter department:\n");
    scanf("%s",student[studentCount].department);

    printf("Enter fees:\n");
    scanf("%d", &student[studentCount].fees);
    }

    for(int studentCount = 0; studentCount < totalNumberOfStudents; ++studentCount)
    {
    student[studentCount].PrintStudentFees = &PrintStudentFees;
    
    printf("%s's fees: ", student[studentCount].name);
    student[studentCount].PrintStudentFees(student[studentCount].fees);
    }
}

void PrintStudentFees(int fees)
{
    printf("%d\n", fees);
}
