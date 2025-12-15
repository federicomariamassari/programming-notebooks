#include <stdio.h>

int main(void)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (i % 2)
            continue;

        sum += i;  // Will sum all even numbers smaller than 10:  0 + 2 + 4 + 6 + 8 = 20
    }

    printf("%d\n", sum);

    return 0;
}
