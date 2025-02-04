#include <stdio.h>

int main() {
    float numbers[10];
    int i, j;
    float temp;

    // Input 10 float values
    printf("Enter 10 float values:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Sort the array in ascending order using nested loops
    for (i = 0; i < 10 - 1; i++) { // Outer loop for passes
        for (j = i + 1; j < 10; j++) { // Inner loop for comparisons
            if (numbers[i] > numbers[j]) {
                // Swap numbers[i] and numbers[j]
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numbers[i]);
    }
    printf("\n");

    return 0;
}
