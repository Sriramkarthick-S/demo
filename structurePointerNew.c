#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[50];
    int rollNo;
    char department[20];
    int fees;
}Student;

void main()
{
    int numberOfStudents = 0;
    
    printf("Enter number of students");
    scanf("%d", &numberOfStudents);

    Student student[numberOfStudents];
    Student *studentHolder = student;

    for(int studentCount = 0; studentCount < numberOfStudents; ++studentCount)
    {
        printf("Enter Student name");
        scanf("%s", student[studentCount].name);

        printf("Enter student rollNumber");
        scanf("%d", &student[studentCount].rollNo);

        printf("Enter department");
        scanf("%s", student[studentCount].department);

        printf("Enter fees");
        scanf("%d", &student[studentCount].fees);
    }

}