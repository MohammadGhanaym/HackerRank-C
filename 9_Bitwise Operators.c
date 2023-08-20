#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int c1 = 1;
    int c2 = c1 + 1;
    int max_or = 0, max_and = 0, max_xor = 0;
    int result = 0;
    for (c1 = 1; c1 <= n; c1++)
    {
        for (c2 = c1 + 1; c2 <= n; c2++)
        {
            result = c1 & c2;
            if ((result > max_and) && (result < k))
            {
                max_and = result;
            }
            result = c1 | c2;
            if ((result > max_or) && (result < k))
            {
                max_or = result;
            }
            result = c1 ^ c2;
            if ((result > max_xor) && (result < k))
            {
                max_xor = result;
            }
        }
    }
    printf("%i\n", max_and);
    printf("%i\n", max_or);
    printf("%i\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
