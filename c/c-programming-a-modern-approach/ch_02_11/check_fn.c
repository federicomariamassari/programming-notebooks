#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
    int x, y, n;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Are %d and %d both within 0 and %d inclusive? %d\n", x, y, n - 1, check(x, y, n));

    return 0;
}

int check(int x, int y, int n)
{
    return (x >= 0 && x <= n - 1) && (y >= 0 && y <= n - 1);
}
