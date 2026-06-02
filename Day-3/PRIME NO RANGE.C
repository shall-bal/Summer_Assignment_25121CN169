#include <stdio.h>

int main() {
    int start, end, i, j, prime;

    // Read the range from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Check each number in the range
    for (i = start; i <= end; i++) {

        // Assume the number is prime
        prime = 1;

        // Numbers less than 2 are not prime
        if (i < 2)
            prime = 0;

        // Check if the number is divisible by any number from 2 to i-1
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0; // Number is not prime
                break;
            }
        }

        // Print the number if it is prime
        if (prime)
            printf("%d ", i);
    }

    return 0;
}