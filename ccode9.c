#include <stdio.h>

double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Divide by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    double a = 10, b = 5;
    printf("Add: %.2f\n", add(a, b));
    printf("Sub: %.2f\n", sub(a, b));
    printf("Mul: %.2f\n", mul(a, b));
    printf("Div: %.2f\n", divide(a, b));
    printf("Div by zero test: %.2f\n", divide(a, 0));
    return 0;
}
