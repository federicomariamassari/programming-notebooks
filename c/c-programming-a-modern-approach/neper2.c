#include <stdio.h>

int main(void)
{
    int i, factorial, n;
    float e = 0.00f, eps;

    printf("Approximate e to which order? ");
    scanf("%d", &n);

    printf("Enter tolerance level: ");
    scanf("%f", &eps);

    for (i = 1, factorial = i; i <= n; i++)
    {
        if (1.0f / factorial < eps)
            break;

        factorial *= i;
        e += 1.0f / factorial;
    }

    printf("e = %f\n", e);

    return 0;
}
