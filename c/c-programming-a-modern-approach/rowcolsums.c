#include <stdio.h>

#define N 5

int main(void)
{
    int i, j;
    int matrix[N][N];
    int sum_rows[N] = {0}, sum_cols[N] = {0};

    for (i = 0; i < N; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < N; j++)
            scanf("%d", &matrix[i][j]);
    }

    printf("\nRow totals: ");
    for (i = 0; i < N; i++)
    {   
        for (j = 0; j < N; j++)
            sum_rows[i] += matrix[i][j];

        printf("%d ", sum_rows[i]);
    }

    printf("\nColumn totals: ");
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
            sum_cols[j] += matrix[i][j];

        printf("%d ", sum_cols[j]);
    }

    printf("\n");

    return 0;
}
