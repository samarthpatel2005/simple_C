#include <stdio.h>
int main() {
    int n = 153, sum = 0, temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }
    if (sum == n) printf("%d is Armstrong\n", n);
    else printf("%d is not Armstrong\n", n);
    return 0;
}
