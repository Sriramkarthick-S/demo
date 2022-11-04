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
    Student studentDetails[2] = {0};

    printf("Enter student details(name,rollno,department,fees):");
    for(int studentCount = 0; studentCount < 2; i++)
    {
        scanf("%s%d%s%d", studentDetails[studentCount].name, &studentDetails[studentCount].rollNo, studentDetails[studentCount].department, &studentDetails[studentCount].fees);
    }
    
    for(int studentCount = 0; studentCount < 2; i++)
    {
        printf("Name:%s\nRollno:%d\nDepartment:%s\nFees:Rs.%d\n", studentDetails[studentCount].name, studentDetails[studentCount].rollNo, studentDetails[studentCount].department, studentDetails[studentCount].fees);
    }   
}
