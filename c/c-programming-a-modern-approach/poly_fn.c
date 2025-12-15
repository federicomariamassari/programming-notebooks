#include <stdio.h>

double poly(double x);

int main(void)
{
    double x;

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    printf("The polynomial value is: %f\n", poly(x));

    return 0;
}

double poly(double x)
{
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}
