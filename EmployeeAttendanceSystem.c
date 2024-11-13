#include <stdio.h>

int main()
{
    // variable declaration
    char loopAns;
    int employeeID;
    int leaveLimit = 2;
    int absentLimit = 2;
    int status;
    int leave = 0;
    int absent = 0;
    int present = 0;

    do
    {
        printf("Employees Attendance System: \n");
        printf("Enter employee's ID: (1-100)\n");
        scanf("%d", &employeeID);
        
        // nested if else
        if (employeeID != 0)
        {
            if (employeeID <= 100)
            {
                printf("Employee ID Valid.\n");
            }
        }
        else
        {
            printf("INVALID employee (1-100) only.\n");
            break;
        }

        printf("Enter Attendance Status: (1. Present 2. Absent 3. Leave)\n");
        scanf("%d", &status);
        

        // nested switch case
        switch (status)
        {
        case 1:
        {
            printf("Employee ID: %d\n", employeeID);
            printf("Attendance Status: Present\n");
            if (absent && leave != 2)
            {
                printf("No warnings.");
            }
            break;
        }
        case 2:
        {
            printf("Employee ID: %d\n", employeeID);
            printf("Attendance Status: Absent\n");
            if (status == 2)
            {
                absent++;
                printf("Total absent/s: %d\n", absent);

                // prints when employee's absent limits becomes true
                if (absent >= absentLimit)
                {
                    printf("WARNING! employee: %d has exceeded the allowed absences! \n", employeeID);
                }
            }
            break;
        }
        case 3:
        {
            printf("Employee ID: \n%d", employeeID);
            printf("Attendance Status: Leave\n");
            if (status == 3)
            {
                leave++;
                printf("Total leave/s: %d\n", leave);

                // prints when employee's leave becomes true
                if (leave >= leaveLimit)
                {
                    printf("WARNING Employee: %d has exceeded the allowed leave!\n", employeeID);
                }
            }
            break;
        }
        
        // avoids errors 
        default:
        {
            printf("Please enter (1-3) only.\n");
        }
        }
        printf("Do you want to enter another attendance record? (y/n): \n");
        scanf(" %c", &loopAns);
    } while (loopAns == 'y' || loopAns == 'Y');
    printf("Thank you for using the Employee Attendance System!");
    return 0;
}