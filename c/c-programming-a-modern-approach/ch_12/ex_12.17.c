#include <stdio.h>

#define N 3
#define LEN 5

int sum_two_dimensional_array(const int *a, int n);

int main(void)
{
    int a[N][LEN] = {
        {2, 2, 2, 2, 2},
        {1, 1, 1, 1, 1},
        {3, 3, 3, 3, 3}
    };

    printf("Sum: %d\n", sum_two_dimensional_array(a[0], N));  /* p. 270 */

    return 0;
}

int sum_two_dimensional_array(const int *a, int n)
{
    int sum = 0;
    const int *p;

    for (p = a; p < a + n * LEN; p++)
        sum += *p;
    
    return sum;
}
