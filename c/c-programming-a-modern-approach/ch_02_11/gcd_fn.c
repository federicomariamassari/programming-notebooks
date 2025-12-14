#include <stdio.h>

int gcd(int m, int n);  /* gcd using Euclid's algorithm recursively */

int main(void)
{
    int m, n;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    printf("Greatest common divisor: %d\n", gcd(m, n));

    return 0;
}

int gcd(int m, int n)
{
    int remainder;

    if (n == 0)
        return m;
    
    remainder = m % n;
    m = n;
    n = remainder;

    return gcd(m, n);
}
