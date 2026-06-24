#include <stdio.h>

struct BankAccount {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Name: ");
    scanf("%s", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    do {
        printf("\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount <= acc.balance)
                    acc.balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 3:
                printf("\nAccount No: %d", acc.accNo);
                printf("\nName: %s", acc.name);
                printf("\nBalance: %.2f\n", acc.balance);
                break;
        }

    } while(choice != 4);

    return 0;
}