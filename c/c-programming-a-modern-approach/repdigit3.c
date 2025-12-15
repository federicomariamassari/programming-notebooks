#include <stdbool.h>  /* C99 only */
#include <stdio.h>

#define N 10

int main(void)
{
    int digit_counter[N] = {0};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_counter[digit]++;
        n /= 10;
    }

    printf("Digit:      ");
    for (i = 0; i < N; i++)
        printf("%3d", i);
    printf("\n");
    
    printf("Occurrences:");
    for (i = 0; i < N; i++)
        printf("%3d", digit_counter[i]);
    printf("\n");

    return 0;
}
