#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

bool PrintStudent(Student *studentsList, char *departmentName, int numberOfStudents)
{
    bool returnValue = false;

    for(int studentCount = 0; studentCount < numberOfStudents; studentCount++)
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
    int numberOfStudents = 0;
    char departmentName[10] = {0};

    printf("Enter number of students: ");
    scanf("%d",&numberOfStudents);

    Student studentsList[numberOfStudents];

    printf("Enter student details(name,rollno,department,fees):");
    for(int studentCount = 0; studentCount < numberOfStudents; studentCount++)
    {
        scanf("%s%d%s%d", studentsList[studentCount].name, &studentsList[studentCount].rollNo, studentsList[studentCount].department, &studentsList[studentCount].fees);
    }

    printf("Enter department: ");
    scanf("%s",departmentName);

    if(PrintStudent(studentsList, departmentName, numberOfStudents) == true)
    {
        printf("Names printed");
    }
}
