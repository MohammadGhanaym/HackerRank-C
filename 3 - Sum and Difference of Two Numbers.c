#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    unsigned int num1;
    unsigned int num2;
    float num3;
    float num4;

    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);
    printf("%d %d\n", (num1 + num2), (num1 - num2));
    printf("%0.1f %0.1f\n", (num3 + num4), (num3 - num4));

    return 0;
}