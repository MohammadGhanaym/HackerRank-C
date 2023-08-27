#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    unsigned int k = 0;
    for (unsigned int i = n * 2 - 1; i > 0; i--)
    {
        if (i >= n)
        {
            k = (i % n) + 1;
        }
        else
        {
            k = (n - i) + 1;
        }
        for (unsigned int a = n; a > k; a--)
        {
            printf("%i ", a);
        }
        for (unsigned int b = 0; b < k * 2 - 1; b++)
        {
            printf("%i ", k);
        }
        for (unsigned int c = k + 1; c <= n; c++)
        {
            printf("%i ", c);
        }
        printf("\n");
    }
    return 0;
}