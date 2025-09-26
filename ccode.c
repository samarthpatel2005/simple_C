#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        if (isPrime(numbers[i])) {
            printf("%d is prime\n", numbers[i]);
        } else {
            printf("%d is not prime\n", numbers[i]);
        }
    }

    return 0;
}
