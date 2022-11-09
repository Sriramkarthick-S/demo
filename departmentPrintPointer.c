#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int rollNo;
    char department[20];
    int fees;
} Student;

void ListStudents(Student *studentDetailsList, char dept[])
{
   if(strcmp(studentDetailsList->department, dept) == 0)
   {
      printf("Name(from dept '%s'):%s\n\n",dept, studentDetailsList->name);
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
