#include <stdio.h>

void pb(int n);

int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    pb(n);  /* Test execution */
    printf("\n");

    return 0;
}

void pb(int n)
{
    if (n != 0)
    {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
