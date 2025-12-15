/* Compute the square root of a floating point number using Newton's method */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y, average, square_root;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    y = 1;
    while (1)
    {
        average = 0.5 * (y + x / y);

        if (fabs(y - average) < .00001 * fabs(y))
            break;

        y = average;
    }

    square_root = y;

    printf("Square root: %f\n", square_root);

    return 0;
}
