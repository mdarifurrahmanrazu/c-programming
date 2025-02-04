#include <stdio.h>

// Function to change the case of each letter in the string
void changeCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // If the character is a lowercase letter (between 'a' and 'z')
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
                 /* The ASCII value of 'a' (lowercase 'a') is 97, and the ASCII value of 'A' (uppercase 'A') is 65.
The difference between any lowercase letter and its corresponding uppercase letter is always 32 ('a' - 'A' = 97 - 65 = 32). */
        }
        // If the character is an uppercase letter (between 'A' and 'Z')
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Convert to lowercase
                 /* The ASCII value of 'a' (lowercase 'a') is 97, and the ASCII value of 'A' (uppercase 'A') is 65.
The difference between any lowercase letter and its corresponding uppercase letter is always 32 ('a' - 'A' = 97 - 65 = 32). */
        }
    }
}

int main() {
    char str[100];


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';


    changeCase(str);


    printf("Converted string: %s\n", str);

    return 0;
}
