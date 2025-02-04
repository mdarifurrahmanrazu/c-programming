#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if two strings are anagrams
int are_anagrams(char *str1, char *str2) {
    // If the lengths of the strings are different, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Create two arrays to count the occurrences of each character in both strings
    int count1[256] = {0};  // For ASCII characters
    int count2[256] = {0};  // For ASCII characters

    // Count the frequency of each character in both strings
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[(int)str1[i]]++;  // Increment count for str1's character
        count2[(int)str2[i]]++;  // Increment count for str2's character
    }

    // Compare the frequency arrays
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0;  // Not anagrams
        }
    }

    return 1;  // Strings are anagrams
}

int main() {
    char str1[100], str2[100];

    // Input the two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character

    // Check if the strings are anagrams
    if (are_anagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
