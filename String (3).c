#include <stdio.h>

// Function prototypes
void my_strcpy_array(char target[], char source[]);
void my_strcpy_pointer(char *target, char *source);

int main() {
    // Source string
    char source[] = "Hello, World!";

    // Target arrays
    char target_array[50];
    char target_pointer[50];

    // Copy using array subscript notation
    my_strcpy_array(target_array, source);

    // Copy using pointer arithmetic
    my_strcpy_pointer(target_pointer, source);


    printf("Source: \"%s\"\n", source);
    printf("Target (using array subscript): \"%s\"\n", target_array);
    printf("Target (using pointer arithmetic): \"%s\"\n", target_pointer);

    return 0;
}


void my_strcpy_array(char target[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

void my_strcpy_pointer(char *target, char *source) {
    while (*source != '\0') {
        *target = *source;
        target++;
        source++;
    }
    *target = '\0';
}
