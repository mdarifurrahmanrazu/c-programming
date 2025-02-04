#include <stdio.h>
#include <string.h>
int wordcount(char *str, char *word)
{
    int count = 0;
    char *p = str;
    while ((p = strstr(p, word)) != NULL)
    {
        if ((p == str || !isalpha(*(p - 1))) && !isalpha(*(p + strlen(word))))
        {
            count++;
        }
        p += strlen(word);
    }
    return count;
}

int main()
{
    char str[100];
    char word[20];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the word: ");
    scanf("%s", word);
    int count = wordcount(str, word);
    printf("The word '%s' appears %d times in the string.\n", word, count);

}

