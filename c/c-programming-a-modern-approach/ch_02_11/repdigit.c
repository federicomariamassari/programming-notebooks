#include <stdbool.h>  /* C99 only */
#include <stdio.h>

#define N 10

int main(void)
{
    bool digit_seen[N] = {false};  // remaining elements set to 0 which is equivalent to false
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;  // extract last digit
        
        if (digit_seen[digit])
            break;

        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0)  // Break occurred
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}
