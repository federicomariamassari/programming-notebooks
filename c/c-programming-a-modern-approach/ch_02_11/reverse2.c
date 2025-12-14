#include <stdio.h>

int main(void)
{
    int n, hundreds, tens, units;

    printf("Enter a three-digit number: ");
    scanf("%3d", &n);

    units = (n % 100) % 10;
    tens = (n % 100) / 10;
    hundreds = n / 100;

    printf("The reversal is: %d%d%d\n", units, tens, hundreds);

    return 0;
}
