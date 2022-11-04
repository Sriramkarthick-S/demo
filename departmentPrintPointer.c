#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

void ListStudents(Student *studentDetails1, char dept[])
{
   if(!strcmp(studentDetails1->department, dept))
   {
      printf("Name(from dept '%s'):%s\n\n",dept, studentDetails1->name);
   }
}

void main()
{
    int numberofStudents = 0;
    char deptName[10] = {0};

    printf("Enter number of students: ");
    scanf("%d",&numberofStudents);

    Student studentDetails[numberofStudents];
    Student *studentDetailsHolder = studentDetails;

    printf("Enter student details(name,rollno,department,fees):");
    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        scanf("%s%d%s%d", (studentDetailsHolder+studentCount)->name, &(studentDetailsHolder+studentCount)->rollNo, (studentDetailsHolder+studentCount)->department, &(studentDetailsHolder+studentCount)->fees);
    }

    printf("Enter department: ");
    scanf("%s",deptName);

    for(int studentCount = 0; studentCount < numberofStudents; studentCount++)
    {
        ListStudents((studentDetailsHolder+studentCount), deptName);
    } 
}
