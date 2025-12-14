/* 12.12e */

#include <stdio.h>

#define SIZE 5

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[SIZE] = {1, 4, 8, 7, 3};
    int largest, second_largest;

    find_two_largest(a, SIZE, &largest, &second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p;

    if (n < 2)
    {
        printf("A minimum of two elements is required!");
        return;
    }

    if (a > a + 1)
    {
        *largest = *a;
        *second_largest = *(a + 1);
    } else
    {
        *largest = *(a + 1);
        *second_largest = *a;
    }

    for (p = a + 2; p < a + n; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }

    printf("Largest: %d\n", *largest);
    printf("Second largest: %d\n", *second_largest);
}
