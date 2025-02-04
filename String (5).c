#include <stdio.h>

// Function prototype
void convert_lowercase(char *str);

int main() {

    char str[] = "HELLO, World! THIS Is A Test.";

    printf("Original string: \"%s\"\n", str);

    convert_lowercase(str);


    printf("Converted string: \"%s\"\n", str);

    return 0;
}


void convert_lowercase(char *str) {
    while (*str != '\0') {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
                 /* The ASCII value of 'a' (lowercase 'a') is 97, and the ASCII value of 'A' (uppercase 'A') is 65.
The difference between any lowercase letter and its corresponding uppercase letter is always 32 ('a' - 'A' = 97 - 65 = 32). */
        }
        str++;
    }
}
