#include <stdio.h>

int main() {
    char alphabet[26];
    int i;

    // Populate the array with ASCII values of the alphabet
    for (i = 0; i < 26; i++) {
        alphabet[i] = 'A' + i; // 'A' has ASCII value 65
    }

    // Display the alphabets
    printf("Alphabets from the array:\n");
    for (i = 0; i < 26; i++) {
        printf("%c ", alphabet[i]);
    }
    printf("\n");

    return 0;
}
