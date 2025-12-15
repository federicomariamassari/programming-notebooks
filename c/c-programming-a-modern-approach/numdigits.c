#include <stdio.h>

/* Calculate the number of digits in an integer */
int main(void)
{
    int digits = 0, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do 
    {
        n /= 10;
        digits++;
    } 
    while (n != 0);  // To account for negative numbers as well

    printf("The number has %d digits.\n", digits);

    return 0;
}
