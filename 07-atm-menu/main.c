#include <stdio.h>
#include <stdlib.h>

void numberInput(int *a) {
    scanf("%d", a);
}

int main() {
    int balance = 1000;
    int running = 1;

    printf(">>> Welcome to ATM Menu\n===========================================\n");

    while (running) {
        printf("====================================\n");
        printf("1 → Show Balance\n2 → Deposit\n3 → Withdraw\n0 → Exit\n");
        printf("====================================\n");

        int choice;
        numberInput(&choice);

        int amount;

        switch (choice) {
            case 1: // Show balance
                system("clear");
                printf("Your Balance: $%d\n", balance);
                break;

            case 2: // Deposit
                system("clear");
                printf("Enter amount to deposit: $");
                numberInput(&amount);
                if (amount < 0) {
                    printf("Amount must be positive!\n");
                } else if (amount == 0) {
					printf("Amount must not be Zero/0\n");
				}else {
                    balance += amount;
                    printf("Deposited: +$%d\nNew Balance: $%d\n", amount, balance);
                }
                break;

            case 3: // Withdraw
                system("clear");
                printf("Enter amount to withdraw: $");
                numberInput(&amount);
                if (amount <= 0) {
                    printf("Amount must be positive!\n");
                } else if (amount > balance) {
                    printf("Not enough balance! Your Balance: $%d\n", balance);
                } else {
                    balance -= amount;
                    printf("Withdrawn: -$%d\nNew Balance: $%d\n", amount, balance);
                }
                break;

            case 0: // Exit
                system("clear");
                printf("*** Exiting ATM Menu ***\n");
                running = 0;
                break;

            default:
                system("clear");
                printf("Invalid choice! Please select from the menu.\n");
        }
    }

    return 0;
}
