#include <stdio.h>

#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[N] = {1, 4, 8, 7, 3};
    int i, largest, second_largest;

    for (i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    find_two_largest(a, N, &largest, &second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    if (a[0] > a[1])
    {
        *largest = a[0];
        *second_largest = a[1];
    } else 
    {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (i = 2; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
            *second_largest = a[i];
    }

    printf("Largest: %d\n", *largest);
    printf("Second largest: %d\n", *second_largest);
}
