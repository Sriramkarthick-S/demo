#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[10];
    int fees;
    void (*ListStudents)(Student *studentsList, char *departmentName, int numberOfStudents);
} Student;

void ListStudents(Student *studentsList, char *departmentName, int numberOfStudents);

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
    char requiredDepartment[10];

    printf("Enter required department:");
    scanf("%s", requiredDepartment);


    for(int studentCount = 0; studentCount < totalNumberOfStudents; ++studentCount)
    {
    (studentHolder + studentCount)->ListStudents = &ListStudents;
    
    ListStudents(studentHolder, requiredDepartment, totalNumberOfStudents);
    }
}

void ListStudents(Student *studentsList, char *departmentName, int numberOfStudents)
{
  for(int studentCount = 0; studentCount < numberOfStudents; ++studentCount)
    {
        if(strcmp((studentsList + studentCount)->department, departmentName) == 0)
        {

            printf("Name(from department '%s'):%s\n\n",departmentName, (studentsList + studentCount)->name);
        }
    }
}
