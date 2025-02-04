#include <stdio.h>


int word_count(char *str);

int main() {

    char str[] = "Hello, World! This\tis a\ntest.";


    printf("Original string: \"%s\"\n", str);


    int count = word_count(str);


    printf("Number of words: %d\n", count);

    return 0;
}


int word_count(char *str) {
    int count = 0;
    int in_word = 0; // 0 means false, 1 means true

    while (*str != '\0') {
        if (*str == ' ' || *str == '\t' || *str == '\n') {
            in_word = 0;
        } else {
            if (in_word == 0) {
                count++;
                in_word = 1;
            }
        }
        str++;
    }

    return count;
}
