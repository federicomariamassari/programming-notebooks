#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int b[N] = {10, 8, 4, 21, 13, 44, 19, 3, 9, 31};
    int *largest;

    largest = find_largest(b, N);

    printf("Largest: %d\n", *largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int *largest, i;

    largest = &a[0];
    for (i = 1; i < n; i++)
        if (a[i] > *largest)
            largest = &a[i];

    return largest;
}
