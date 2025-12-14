#include <stdio.h>

int main(void)
{
    int dollars;
    int n20, n10, n5, n1;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    n20 = dollars / 20;
    dollars -= n20 * 20;

    n10 = dollars / 10;
    dollars -= n10 * 10;

    n5 = dollars / 5;
    dollars -= n5 * 5;

    n1 = dollars;

    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf("$5 bills: %d\n", n5);
    printf("$1 bills: %d\n", n1);

    return 0;
}
