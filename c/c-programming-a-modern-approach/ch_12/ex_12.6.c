/* 12.6e */

#include <stdio.h>

#define N 10

int sum_array(const int a[], int n);  // Alternatively: *a

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = sum_array(a, N);
    printf("Sum: %d\n", sum);
}

int sum_array(const int a[], int n)
{
    int sum;
    const int *p;  /* To avoid discarding qualifiers */

    sum = 0;
    for (p = a; p < a + n; p++)
        sum += *p;

    return sum;
}
