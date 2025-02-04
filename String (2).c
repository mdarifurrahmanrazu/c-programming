#include <stdio.h>

// Function prototypes
int my_strlen_array(const char str[]);
int my_strlen_pointer(const char *str);

int main() {
    // Example string
    char str[] = "Hello, World!";

    // Calculate string length using both versions
    int length_array = my_strlen_array(str);
    int length_pointer = my_strlen_pointer(str);


    printf("String: \"%s\"\n", str);
    printf("Length (using array subscript): %d\n", length_array);
    printf("Length (using pointer arithmetic): %d\n", length_pointer);

    return 0;
}

int my_strlen_array(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int my_strlen_pointer(const char *str) {
    const char *start = str;
    while (*str != '\0') {
        str++;
    }
    return (int)(str - start);
}
