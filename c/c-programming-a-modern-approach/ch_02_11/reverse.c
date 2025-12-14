#include <stdio.h>

int main(void)
{
    int n, tens, units;

    printf("Enter a two-digit number: ");
    scanf("%2d", &n);

    units = n % 10;
    tens = n / 10;

    printf("The reversal is: %d%d\n", units, tens);

    return 0;
}
