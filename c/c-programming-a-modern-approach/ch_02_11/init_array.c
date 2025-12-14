#include <stdio.h>
#include <stdbool.h>  /* C99 only */

#define N 7

int main(void)
{
    int i;
    bool weekend[N] = {1, 0, 0, 0, 0, 0, 1};
    bool weekend_c99[N] = {[0] = true, [N-1] = true};

    for (i = 0; i < N; i++)
        printf("%d ", weekend[i]);

    printf("\n");

    for (i = 0; i < N; i++)
        printf("%d ", weekend_c99[i]);

    printf("\n");

    return 0;
}
