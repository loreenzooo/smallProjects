#include <stdio.h>

int main()
{
    int choice;
    int initialBalance;
    char userName[30];
    int accountNum;
    int balance;
    int depositMoney;
    int withdrawMoney = 0;
    int deductedBalance;
    int *ptr = NULL;

    printf("Banking System Menu: \n");
    printf("1. Create an account\n2. View Account Details\n3. Deposit money\n4. Withdraw money\n5. Exit\n");
    while (choice != 5)
    {

        printf("Enter your choice: ");
        scanf(" %d", &choice);

        if (choice == 1)
        {

            printf("Enter your name: ");
            scanf("%s", userName);

            printf("Enter your account number: \n");
            scanf("%d", &accountNum);

            printf("Enter intital balance: ");
            scanf("%d", &initialBalance);

            printf("Account successfully created!\n");
        }
        else if (choice == 2)
        {

            if (accountNum == NULL)
            {
                printf("Please register first.");
                break;
            }

            else
            {

                printf("Account details: \n");
                printf("Name: %s\n", userName);
                printf("Account number: %d\n", accountNum);
                printf("Balance: %d\n", initialBalance);
            }
        }

        else if (choice == 3)
        {
            printf("Enter money you want to deposit: ");
            scanf("%d", &depositMoney);
            balance = depositMoney + initialBalance;
            initialBalance += depositMoney;
            printf("Your updated balance is: %d\n", initialBalance);
        }

        else if (choice == 4)
        {
            printf("Enter amount you want to withdraw: ");
            scanf("%d", &withdrawMoney);
            initialBalance = initialBalance - withdrawMoney;
            if (withdrawMoney > initialBalance)
            {
                printf("Error invalid withdrawal.");
                break;
            }

            else
            {
                printf("Withdraw successful. New balance: %d\n", initialBalance);
            }
        }
        else if (choice == 5)
        {
            printf("Exit.");
            break;
        }

        else
        {
            printf("Invalid (1-5) only.");
        }
    }
    return 0;
}
