#include <stdio.h>

void update(int *a, int *b)
{
    // Complete this function
    int sum = *a + *b;
    int absDiff = *a - *b;
    *a = sum;
    if (absDiff < 0)
    {
        *b = absDiff * -1;
    }
    else
    {
        *b = absDiff;
    }
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}