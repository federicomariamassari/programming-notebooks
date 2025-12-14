#include <stdio.h>

int main(void)
{
    short i, n;

    printf("Enter number of entries in the table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);  // failures: 182 for short, 46341 for int; not tested with long

    return 0;
}
