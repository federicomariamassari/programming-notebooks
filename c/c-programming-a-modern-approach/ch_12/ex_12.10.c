/* 12.10e */

#include <stdio.h>

#define N 5

int *find_middle(int a[], int n);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5};

    printf("Middle: %d\n", *find_middle(a, N));

    return 0;
}

int *find_middle(int a[], int n)
{
    return a + n/2;
}
