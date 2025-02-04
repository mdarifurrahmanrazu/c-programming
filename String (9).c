#include <stdio.h>
#include <string.h>


int main() {
    char str1[100], str2[100];
    int i, j, found = -1;


    printf("Enter the first string (str1): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string (str2): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == str1[0]) {

            for (j = 0; str1[j] != '\0' && str2[i + j] == str1[j]; j++);
            if (str1[j] == '\0') {
                found = i;
                break;
            }
        }
    }


    if (found != -1) {
        printf("Substring found at index: %d\n", found);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
