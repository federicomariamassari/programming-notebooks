#include <stdio.h>

int main(void)
{
    int item_no;
    int dd, mm, yyyy;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_no);

    printf("Enter unit price (max $9,999.99): ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%-d\t\t$%7.2f\t%-.2d/%-.2d/%-d\n", item_no, unit_price, mm, dd, yyyy);

    return 0;
}
