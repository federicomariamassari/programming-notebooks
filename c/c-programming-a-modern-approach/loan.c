#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment, balance;
    float monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter the interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    monthly_interest_rate = interest_rate / (12 * 100);

    balance = loan_amount * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = balance * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = balance * (1 + monthly_interest_rate) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
