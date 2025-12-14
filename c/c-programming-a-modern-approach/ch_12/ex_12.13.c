/* 12.13e */

#include <stdio.h>

#define N 5

int main(void)
{
    double ident[N][N];
    int num_zeros = N;

    double *p;
    for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
    {
        if (num_zeros == N)
        {
            *p = 1.0;
            num_zeros = 0;
        } else
        {
            *p = 0.0;
            num_zeros++;    
        }
    }

    for (p = &ident[0][0]; p <= &ident[N-1][N-1]; p++)
    {
        printf("%f ", *p);
        num_zeros++;

        if (num_zeros == N)
        {
            printf("\n");
            num_zeros = 0;
        }
    }

    return 0;
}
