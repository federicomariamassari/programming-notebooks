/* 12.15e */

#include <stdio.h>
#include <stdlib.h>  /* for early termination condition */

#define N_DAYS 7
#define N_HOURS 24

void print_row(const float a[][N_HOURS], int n_rows, int n_cols, int row);  /* p. 197 */

int main(void)
{
    float temperatures[N_DAYS][N_HOURS] = {{0.0}};
    int i = 1;

    temperatures[i][3] = 32.0;

    print_row(temperatures, N_DAYS, N_HOURS, i);

    return 0;
}

void print_row(const float a[][N_HOURS], int n_rows, int n_cols, int row)
{
    if (row > n_rows)
    {
        printf("error: %d must be smaller than or equal to %d", row, n_rows);
        EXIT_SUCCESS;
    }

    const float *p;
    for (p = a[row]; p < a[row] + n_cols; p++)
        printf("%f ", *p);
    printf("\n");
}
