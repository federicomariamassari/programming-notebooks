#include <stdio.h>

int main(void)
{
    int n_shares;
    float share_price, value, commission, rival_commission;

    printf("Enter the number of shares: ");
    scanf("%d", &n_shares);

    printf("Enter the share price: ");
    scanf("%f", &share_price);

    value = n_shares * share_price;

    if (n_shares < 2000)
        rival_commission = 33 + .03 * n_shares;
    else
        rival_commission = 33 + .02 * n_shares;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011 * value;
    else
        commission = 255.00f + 0.009 * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Commission: $%.2f\n", commission);
    printf("Rival's commission: $%.2f\n", rival_commission);

    return 0;
}
