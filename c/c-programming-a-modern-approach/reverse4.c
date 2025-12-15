#include <stdio.h>

int main(void)
{
    int n, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The reversal is: ");

    do {
        remainder = n % 10;
        n /= 10;
        printf("%d", remainder);
    } while (n != 0);

    printf("\n");

    return 0;
}
