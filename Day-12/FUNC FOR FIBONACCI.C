#include <stdio.h>

int fib(int n) {
    int a = 0, b = 1, c, i;

    if(n == 1) return a;
    if(n == 2) return b;

    for(i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d", fib(n));

    return 0;
}
