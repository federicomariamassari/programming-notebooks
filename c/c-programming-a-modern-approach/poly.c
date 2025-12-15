#include <stdio.h>

int main(void)
{
    float x, poly;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    // 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
    poly = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) -
        5 * (x * x * x) - (x * x) + 7 * x - 6;

    printf("Value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7^x - 6: %f\n", poly);

    return 0;
}
