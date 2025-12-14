#include <stdio.h>

/* Polynomial evaluation using Horner's rule */
int main(void)
{
    float x, poly;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The value of the polynomial is: %f\n", poly);

    return 0;
}
