#include <stdio.h>

// Function prototype
void convert_uppercase(char *str);

int main() {
    char str[] = "Hello, World! This is a Test.";


    printf("Original string: \"%s\"\n", str);

    // Convert to uppercase
    convert_uppercase(str);

    printf("Converted string: \"%s\"\n", str);

    return 0;
}


void convert_uppercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
            /* The ASCII value of 'a' (lowercase 'a') is 97, and the ASCII value of 'A' (uppercase 'A') is 65.
The difference between any lowercase letter and its corresponding uppercase letter is always 32 ('a' - 'A' = 97 - 65 = 32). */
        }
        str++;
    }
}
