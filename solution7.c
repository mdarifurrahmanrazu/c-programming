#include <stdio.h>

#define ALPHABET_COUNT 26 // Constant integer expression for array size

int main() {
    char alphabet[ALPHABET_COUNT];
    int i;

    // Populate the array with ASCII values of the alphabet
    for (i = 0; i < ALPHABET_COUNT; i++) {
        alphabet[i] = 'A' + i; // 'A' has ASCII value 65
    }

    // Display the alphabets
    printf("Alphabets from the array:\n");
    for (i = 0; i < ALPHABET_COUNT; i++) {
        printf("%c ", alphabet[i]);
    }
    printf("\n");

    return 0;
}
