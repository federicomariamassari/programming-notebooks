#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
    int *largest;

    int a[N] = {5, 2, 1, 6, 9, 3, 4, 0, 8, 7};
    largest = find_largest(a, N);

    printf("largest: %p\n*largest: %d\n", (void *)largest, *largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int i;
    int *largest = &a[0];
    for (i = 1; i < n; i++)
        if (a[i] > *largest)
            largest = &a[i];
        
    return largest;
}
