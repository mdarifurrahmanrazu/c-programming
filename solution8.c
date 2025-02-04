#include <stdio.h>

int main() {
    int numbers[5];
    int i, j, isPrime;

    // Input 5 integers from the user
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the prime numbers from the array
    printf("Prime numbers in the array:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] <= 1) {
            continue; // Skip numbers less than or equal to 1 as they are not prime
        }

        isPrime = 1; // Assume the number is prime
        for (j = 2; j < numbers[i]; j++) { // Check divisibility
            if (numbers[i] % j == 0) {
                isPrime = 0; // Number is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
