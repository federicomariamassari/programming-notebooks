#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator;
    int reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int m, n, remainder;

    n = numerator;
    m = denominator;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
