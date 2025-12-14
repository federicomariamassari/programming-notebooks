#include <stdio.h>

int fact(int n);

int main(void)
{
    int n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    printf("%d! = %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{
    return n <= 1 ? 1 : n * fact(n - 1);
}
