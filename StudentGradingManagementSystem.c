#include <stdio.h>

struct studentInfo
{
    int numOfSubs;
    int studentID;
    char studentName[30];
    double grade[5];
    int choice;
    double averageGrade;
    char answer;
    int totalGrade;
    int updateStudentID;
} info;

int main()
{

    info.numOfSubs = 5;
    info.totalGrade = 0;

    while (info.choice != 5)
    {
        printf("Welcome to Student Grade Management System!\n");
        printf("1. Add Student\n2. Update Grades\n3. Display Student Grades\n4. Calculate Average Grade\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &info.choice);

        if (info.choice == 1)
        {
            printf("Enter Student ID:");
            scanf("%d", &info.studentID);

            printf("Enter Student Name: ");
            scanf("%s", info.studentName);

            printf("Enter grades for 5 subjects:\n");
            for (int i = 1; i <= info.numOfSubs; i++)
            {
                printf("Subject %d: ", +i);
                scanf("%2lf", &info.grade[i]);
                info.totalGrade += info.grade[i];
            }
            printf("Student added successfully!\n");
        }
        else if (info.choice == 2)
        {
            printf("Enter student ID to update grades: ");
            scanf("%d", &info.updateStudentID);
            if (info.updateStudentID != info.studentID)
            {
                printf("Invalid ID.");
                break;
            }
            printf("Enter grades for 5 subjects:\n");
            for (int i = 1; i <= info.numOfSubs; i++)
            {
                printf("Subject %d: ", +i);
                scanf("%2lf", &info.grade[i]);
            }

            printf("Grades updates successfully!\n");
        }
        else if (info.choice == 3)
        {

            printf("Student ID: %d\n", info.studentID);
            printf("Student Name: %s\n", info.studentName);
            printf("Grades: \n");
            for (int i = 1; i <= info.numOfSubs; i++)
            {
                printf("Subject: %d: %.2lf \n", i, info.grade[i]);
            }
        }
        else if (info.choice == 4)
        {
            info.averageGrade = info.totalGrade / info.numOfSubs;
            printf("Student ID: %d\n", info.studentID);
            printf("Student name: %s\n", info.studentName);
            printf("Average Grade: %.2lf\n", info.averageGrade);
        }
        else if (info.choice == 5)
        {
            printf("Program Exit.");
        }
        else
        {
            printf("Invalid input! please enter (1-5) only.");
        }
    }
    return 0;
}