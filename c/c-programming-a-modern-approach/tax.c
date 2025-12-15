#include <stdio.h>

#define TAX_RATE .05f

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    float amount_with_tax = (1 + TAX_RATE) * amount;

    printf("With tax added: $%.2f\n", amount_with_tax);

    return 0;
}
