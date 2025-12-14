#include <stdio.h>

int main(void)
{
    int N = 10;
    for (int sum = 0, i = 1; i <= N; i++)
        printf("Sum: %d\n", sum += i);

    return 0;
}
