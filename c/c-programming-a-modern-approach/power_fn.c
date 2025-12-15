#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x, n;

    printf("Enter value for x and n: ");
    scanf("%d %d", &x, &n);

    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    return n == 0 ? 1 : x * power(x, n - 1);
}
