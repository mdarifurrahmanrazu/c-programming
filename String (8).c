#include <stdio.h>
#include <string.h>


void reverse_string(char *str, char *reversed) {
    int length = strlen(str);
    int j = 0;


    for (int i = length - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }


    reversed[j] = '\0';
}

int main() {
    char str[100], reversed[100];


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';


    reverse_string(str, reversed);


    printf("Reversed string: %s\n", reversed);

    return 0;
}
