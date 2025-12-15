#include <stdio.h>

#define SIZE 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    double avg, sum;
    double a[SIZE] = {10.0, 10.0, 10.0, 10.0, 10.0};

    avg_sum(a, SIZE, &avg, &sum);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;
    
    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];

    *avg = *sum / n;

    printf("Sum: %f, Avg: %f\n", *sum, *avg);
}
