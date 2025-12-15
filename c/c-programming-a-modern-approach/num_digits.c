#include <stdio.h>

int num_digits(unsigned long int n);

int main(void)
{
    unsigned long int n;

    printf("Enter a positive integer: ");
    scanf("%lu", &n);

    printf("The number has %d digits.\n", num_digits(n));

    return 0;
}

int num_digits(unsigned long int n)
{
    int ndigits = 0;

    do {
        n /= 10;
        ndigits++;

    } while (n != 0);

    return ndigits;
}
