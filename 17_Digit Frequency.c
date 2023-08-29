#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    unsigned int digitFreq[10] = {0};

    for (unsigned int c = 0; c < strlen(s); c++)
    {
        switch (s[c])
        {
        case '0':
            digitFreq[0]++;
            break;
        case '1':
            digitFreq[1]++;
            break;
        case '2':
            digitFreq[2]++;
            break;
        case '3':
            digitFreq[3]++;
            break;
        case '4':
            digitFreq[4]++;
            break;
        case '5':
            digitFreq[5]++;
            break;
        case '6':
            digitFreq[6]++;
            break;
        case '7':
            digitFreq[7]++;
            break;
        case '8':
            digitFreq[8]++;
            break;
        case '9':
            digitFreq[9]++;
            break;
        default:
            break;
        }
    }

    for (unsigned int i = 0; i < 10; i++)
    {
        printf("%i ", digitFreq[i]);
    }
    printf("\n");

    return 0;
}
