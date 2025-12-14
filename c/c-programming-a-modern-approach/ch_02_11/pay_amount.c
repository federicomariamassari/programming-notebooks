#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int dollars;
    int twenties, tens, fives, ones;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    pay_amount(dollars, &twenties, &tens, &fives, &ones);

    printf("%3s bills: %d\n", "$20", twenties);
    printf("%3s bills: %d\n", "$10", tens);
    printf("%3s bills: %d\n", "$5", fives);
    printf("%3s bills: %d\n", "$1", ones);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollars / 20;
    *tens = dollars % 20 / 10;
    *fives = dollars % 20 % 10 / 5;
    *ones = dollars % 20 % 10 % 5;
}
