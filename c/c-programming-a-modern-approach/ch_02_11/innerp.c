#include <stdio.h>

#define MAX_LEN 5

double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[MAX_LEN], b[MAX_LEN];
    int i;

    printf("Enter vector a: ");
    for (i = 0; i < MAX_LEN; i++)
        scanf("%lf", &a[i]);

    printf("Enter vector b: ");
    for (i = 0; i < MAX_LEN; i++)
        scanf("%lf", &b[i]);

    printf("The inner product is: %.2f\n", inner_product(a, b, MAX_LEN));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    double inner = 0.0;
    int i;

    for (i = 0; i < n; i++)
        inner += (a[i] * b[i]);

    return inner;
}
