#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    // Write your logic to print the tokens of the sentence here.
    unsigned int startWord = 0;
    char *word = NULL;
    for (unsigned int index = 0; index < strlen(s); index++)
    {
        if (s[index] == ' ')
        {
            word = malloc((index - startWord + 1) * sizeof(char));
            strncpy(word, s + startWord, index - startWord);
            word[index - startWord] = '\0';
            printf("%s\n", word);
            free(word);
            word = NULL;
            startWord = index + 1;
        }
    }
    printf("%s\n", s + startWord);

    return 0;
}