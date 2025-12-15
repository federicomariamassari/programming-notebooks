#include <stdbool.h>  /* C99 only */
#include <stdio.h>

#define N 10

int main(void)
{
    bool digit_seen[N] = {false};
    bool digit_repeated[N] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit_seen[digit])
            digit_repeated[digit] = true;

        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (i = 0; i < N; i++)
    {
        if (digit_repeated[i] == true)  /* Required to correctly print repeated 0s */
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}
