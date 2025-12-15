#include <stdio.h>

int main(void)
{
    int i, factorial, n;
    float e = 0.00f;

    printf("Approximate e to which order? ");
    scanf("%d", &n);

    for (i = 1, factorial = i; i <= n; i++)
    {
        factorial *= i;
        e += 1.0f / factorial;
    }

    printf("e = %f\n", e);

    return 0;
}
