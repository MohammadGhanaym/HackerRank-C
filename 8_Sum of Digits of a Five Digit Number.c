#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int sum = 0;
    scanf("%d", &n);
    // Complete the code to calculate the sum of the five digits on n.
    for (unsigned int counter = 0; counter < 5; counter++)
    {
        int mod_result = n % 10;
        sum += mod_result;
        n /= 10;
    }
    printf("%i\n", sum);

    return 0;
}