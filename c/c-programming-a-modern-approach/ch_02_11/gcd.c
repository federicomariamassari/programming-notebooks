#include <stdio.h>

int main(void)
{
    int m, n, remainder, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    for (;;)
    {
        if (n == 0)
        {
            gcd = m;
            break;
        }

        if (m == 0)
        {
            gcd = n;
            break;
        }

        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", gcd);

    return 0;
}
