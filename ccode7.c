#include <stdio.h>

float balance = 1000.0;

void deposit(float amount) {
    balance += amount;
    printf("Deposited: %.2f, New Balance: %.2f\n", amount, balance);
}

void withdraw(float amount) {
    if (amount > balance) {
        printf("Insufficient funds!\n");
    } else {
        balance -= amount;
        printf("Withdrawn: %.2f, New Balance: %.2f\n", amount, balance);
    }
}

int main() {
    deposit(500);
    withdraw(200);
    withdraw(2000);
    return 0;
}
