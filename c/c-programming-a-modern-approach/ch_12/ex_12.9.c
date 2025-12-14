/* 12.9e */

#include <stdio.h>

#define SIZE 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[SIZE] = {2, 4, 2, 4, 2};
    double b[SIZE] = {0.5, 0.25, 0.5, 0.25, 0.5};

    double product = inner_product(a, b, SIZE);

    printf("%f\n", product);


    return 0;
}

double inner_product(const double *a, const double *b, int n)
{
    double product = 0.0;
    const double *p, *q;

    for (p = a, q = b; p < a + n; p++, q++)  // Review for loops chapter
        product += (*p * *q);

    return product;
}
