#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, n, m;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &n, &m);

    printf("In lowest terms: %d/%d\n", n, m);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, m, n;
    
    n = numerator;
    m = denominator;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    /* Pointers are meant to store the final reduced values, not intermediate ones */
    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
