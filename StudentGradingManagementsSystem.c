#include <stdio.h>
int main()
{
    int numofStudents;
    char studentName[30];
    int subject1Mark = 0;
    int subject2Mark = 0;
    int subject3Mark = 0;
    int totalGrade = 0;
    double studentAverage;

    printf("Enter number of students:\n");
    scanf("%d", &numofStudents);
    for (int i = 1; i <= numofStudents; i++)
    {
        printf("Enter details for student: %d\n", i);
        printf("Enter students name: \n");
        scanf("%s", studentName);

        printf("Enter marks in subject 1:\n");
        scanf("%d", &subject1Mark);

        printf("Enter marks in subject 2:\n");
        scanf("%d", &subject2Mark);

        printf("Enter marks in subject 3:\n");
        scanf("%d", &subject3Mark);

        printf("Student details: %d\n", i);
        printf("----------------------\n");
        printf("Marks: %d, %d, %d\n", subject1Mark, subject2Mark, subject3Mark);
        totalGrade = (double)subject1Mark + subject2Mark + subject3Mark;
        printf("Total grade: %d\n", totalGrade);
        studentAverage = totalGrade / 3;
        printf("Average: %.2lf\n", studentAverage);

        if (studentAverage >= 85)
        {
            printf("Grade = A\n----------------------\n");
        }
        else if (studentAverage >= 70)
        {
            printf("Grade = B\n----------------------\n");
        }
        else if (studentAverage >= 50)
        {
            printf("Grade = C\n----------------------\n");
        }

        else
        {
            printf("Grade = F\n");
        }
    }

    return 0;
}
