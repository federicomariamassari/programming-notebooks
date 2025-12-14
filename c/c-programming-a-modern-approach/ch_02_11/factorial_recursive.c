#include <stdio.h>

unsigned long int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main(void)
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("%d! = %lu\n", n, fact(n));  /* n * (n - 1) * ... * 1 */

    return 0;
}
