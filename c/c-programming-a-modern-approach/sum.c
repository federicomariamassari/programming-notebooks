#include <stdio.h>

int main(void)
{
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");
    
    int n, p, sum;
    
    sum = 0;

    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }

    printf("The sum is: %d\n", sum);

    return 0;
}
