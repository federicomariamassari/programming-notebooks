/*
 short: 7
 int: 13
 long: 20
 long long: 20
 float: 34
 double:  170
 long double: 170
 */

#include <stdio.h>

int main(void)
{
    int n, i;
    short factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d: %hd\n", n, factorial);

    return 0;
}
