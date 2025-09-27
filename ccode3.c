#include <stdio.h>
int main() {
    int n = 7, a = 0, b = 1;
    printf("Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b; b = next;
    }
    return 0;
}
