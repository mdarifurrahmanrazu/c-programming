#include <stdio.h>
#include <string.h>

int isSubstring(char *str1, char *str2) {
    int i, j;


    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == str1[0]) {

            for (j = 0; str1[j] != '\0' && str2[i + j] == str1[j]; j++);
            if (str1[j] == '\0') {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    char str1[100], str2[100];
    int index;


    printf("Enter the first string (str1): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string (str2): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';


    index = isSubstring(str1, str2);

    if (index != -1) {
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
