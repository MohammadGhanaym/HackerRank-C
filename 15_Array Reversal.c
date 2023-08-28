#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int *)malloc(num * sizeof(int));
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    int *reversePtr = &arr[num - 1];
    int tempNum = 0;
    for (unsigned int index = 0; index < num; index++)
    {
        tempNum = *(arr + index);
        if ((arr + index) < (reversePtr - index))
        {
            *(arr + index) = *(reversePtr - index);
            *(reversePtr - index) = tempNum;
        }
        else
        {
            break;
        }
    }

    for (i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}