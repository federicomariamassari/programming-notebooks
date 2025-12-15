#include <stdio.h>

/* Use repeatedly the modulo operator to get the result from the right, then divide by ten */

int digit(int n, int k);

int main(void)
{
    int n, k;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter a position: ");
    scanf("%d", &k);

    printf("Returned digit: %d\n", digit(n, k));

    return 0;
}

int digit(int n, int k)
{   
    if (k == 1)
        return n % 10;

    if (k > 1 && n / 10 == 0)  /* Not enough digits! */
        return 0;

    n /= 10;

    return digit(n, k - 1);
}
