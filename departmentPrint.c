#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

void ListStudents(Student studentDetails1, char dept[])
{
   if(!strcmp(studentDetails1.department, dept))
   {
      printf("Name(from dept '%s'):%s\n\n",dept, studentDetails1.name);
   }
}

void main()
{
    int numberofStudents = 0;
    char deptName[10] = {0};

    printf("Enter number of students: ");
    scanf("%d",&numberofStudents);

    Student studentDetails[numberofStudents];

    printf("Enter student details(name,rollno,department,fees):");
    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        scanf("%s%d%s%d", studentDetails[studentCount].name, &studentDetails[studentCount].rollNo, studentDetails[studentCount].department, &studentDetails[studentCount].fees);
    }

    printf("Enter department: ");
    scanf("%s",deptName);

    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        ListStudents(studentDetails[studentCount], deptName);
    }
}

