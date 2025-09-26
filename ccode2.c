#include <stdio.h>

// Function to perform calculation
int calculate(int a, int b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (b != 0) return a / b;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        default:
            printf("Error: Invalid operator '%c'\n", op);
            return 0;
    }
}

int main() {
    int x = 10, y = 5;
    char ops[] = {'+', '-', '*', '/', '%'};
    int size = sizeof(ops) / sizeof(ops[0]);

    for (int i = 0; i < size; i++) {
        int result = calculate(x, y, ops[i]);
        printf("%d %c %d = %d\n", x, ops[i], y, result);
    }

    return 0;
}
