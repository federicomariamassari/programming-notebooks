#include <stdio.h>

double compute_tax(double amount);

int main(void)
{
    double amount;

    printf("Enter taxable amount: ");
    scanf("%lf", &amount);

    printf("Tax amount: $%.2f\n", compute_tax(amount));

    return 0;
}

double compute_tax(double amount)
{
    if (amount <= 750.00)
        return 0.01 * amount;
    else if (amount <= 2250.00)
        return 7.50 + 0.02 * (amount - 750.00);
    else if (amount <= 3750.00)
        return 37.50 + 0.03 * (amount - 2250.00);
    else if (amount <= 5250.00)
        return 82.50 + 0.04 * (amount - 3750.00);
    else if (amount <= 7000.00)
        return 142.50 + 0.05 * (amount - 5250.00);
    else
        return 230.00 + 0.06 * (amount - 7000.00);
}
