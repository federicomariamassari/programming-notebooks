#include <stdio.h>

int main(void)
{
    int i, npayments;
    float loan_amount, interest_rate, monthly_payment, balance;
    float monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    printf("Enter the number of payments: ");
    scanf("%d", &npayments);

    monthly_interest_rate = interest_rate / (12 * 100);
    balance = loan_amount;

    for (i = 1; i <= npayments && balance >= 0.00f; i++)
    {
        balance = balance * (1 + monthly_interest_rate) - monthly_payment;
        
        if (balance < 0.00f)
            printf("Balance remaining after payment %d: $0.00\n", i);
        else
            printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    }

    return 0;
}
