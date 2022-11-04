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
    int numberofStudents = 0;

    printf("Enter number of students: ");
    scanf("%d",&numberofStudents);

    Student studentDetails[numberofStudents];
    Student *studentDetailsHolder = studentDetails;

    printf("Enter student details(name,rollno,department,fees):");
    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        scanf("%s%d%s%d", (studentDetailsHolder+studentCount)->name, &(studentDetailsHolder+studentCount)->rollNo, (studentDetailsHolder+studentCount)->department, &(studentDetailsHolder+studentCount)->fees);
    }
    
    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n\n", (studentDetailsHolder+studentCount)->name, (studentDetailsHolder+studentCount)->rollNo, (studentDetailsHolder+studentCount)->department, (studentDetailsHolder+studentCount)->fees);
    }   
}
