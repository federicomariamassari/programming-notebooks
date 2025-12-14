#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], b[N], i;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < N; i++)
        b[N - (1+i)] = a[i];

    printf("In reverse order: ");
    for (i = 0; i < N; i++)
        printf("%d ", b[i]);

    printf("\n");

    return 0;
}
