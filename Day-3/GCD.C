#include <stdio.h>

int main() {
    int a, b, i, gcd;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find GCD
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    // Display GCD
    printf("GCD = %d", gcd);

    return 0;
}