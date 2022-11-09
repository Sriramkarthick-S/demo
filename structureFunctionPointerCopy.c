#include <stdio.h>
#include <stdbool.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[10];
    int fees;
    int (*PrintFees)(int);
} Student;

bool PrintStudent(Student, char*, int);

bool PrintStudent(Student *studentsList, char *departmentName, int numberOfStudents)
{
    bool returnValue = false;

    for(int studentCount = 0; studentCount < numberOfStudents; ++studentCount)
    {
        if(strcmp((studentsList + studentCount)->department, departmentName) == 0)
        {
            returnValue = true;

            printf("Name(from department '%s'):%s\n\n",departmentName, (studentsList + studentCount)->name);
        }
    }

    return returnValue;
}
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
    
    printf("Fees amount: %d", student1.PrintFees(student1.fees));
}