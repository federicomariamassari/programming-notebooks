/* 12.11e */

#include <stdio.h>

#define N 10

int *find_largest(int *a, int n);

int main(void)
{
    int b[N] = {10, 8, 4, 21, 13, 44, 19, 3, 9, 31};

    printf("Largest: %d\n", *find_largest(b, N));

    return 0;
}

int *find_largest(int *a, int n)
{
    int *largest = a;
    int *p;

    for (p = a + 1; p < a + n; p++)
    {
        if (*p > *largest)
            largest = p;
    }

    return largest;
}
