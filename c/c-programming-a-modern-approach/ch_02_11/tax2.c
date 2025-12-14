#include <stdio.h>

int main(void)
{
    float taxable_income, tax_amount;

    printf("Enter the amount of taxable income: $");
    scanf("%f", &taxable_income);

    if (taxable_income <= 750.00f)
        tax_amount = .01f * taxable_income;
    else if (taxable_income <= 2250.00f)
        tax_amount = 7.50f + .02f * (taxable_income - 750.00f);
    else if (taxable_income <= 3750.00f)
        tax_amount = 37.50f + 0.03f * (taxable_income - 2250.00f);
    else if (taxable_income <= 5250.00f)
        tax_amount = 82.50f + 0.04f * (taxable_income - 3750.00f);
    else if (taxable_income <= 7000.00f)
        tax_amount = 142.50f + 0.05f * (taxable_income - 5250.00f);
    else
        tax_amount = 230.00f + 0.06f * (taxable_income - 7000.00f);

    printf("Tax amount: $%.2f\n", tax_amount);

    return 0;
}
