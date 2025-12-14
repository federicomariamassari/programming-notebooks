#include <stdio.h>

int power(int x, int n)
{
    return (n == 0) ? 1 : x * power(x, n - 1);
}

int main(void)
{
    int x, n;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a power: ");
    scanf("%d", &n);

    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}
