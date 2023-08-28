#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n = 0;
    scanf("%i", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (unsigned int index = 0; index < n; index++)
    {
        scanf("%i", &arr[index]);
    }
    int sum = 0;
    for (unsigned int index = 0; index < n; index++)
    {
        sum += arr[index];
    }
    printf("%i\n", sum);
    free(arr);

    return 0;
}