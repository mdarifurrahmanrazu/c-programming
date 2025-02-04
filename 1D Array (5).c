#include <stdio.h>

int main() {
    int numbers[5];
    int i, min, max;

    // Input 5 integers
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Initialize min and max with the first element of the array
    min = max = numbers[0];

    // Find the minimum and maximum values
    for (i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Output the results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
