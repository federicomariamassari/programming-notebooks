#include <stdio.h>

int largest(int n, int a[n]);
float average(int n, int a[n]);
int positives(int n, int a[n]);

int main(void)
{
    int a[] = {-3, 1, 5, 4, -12, -9, 8, 4, 11, 23};

    printf("The largest element is %d\n", largest(10, a));
    printf("The average is %.2f\n", average(10, a));
    printf("There are %d positive elements\n", positives(10, a));

    return 0;
}

int largest(int n, int a[n])
{
    int i, max = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

float average(int n, int a[n])
{
    int i;
    float sum = 0.0f;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

int positives(int n, int a[n])
{
    int i, npos = 0;

    for (i = 0; i < n; i++)
        (a[i] > 0) ? npos++ : npos;

    return npos;
}
