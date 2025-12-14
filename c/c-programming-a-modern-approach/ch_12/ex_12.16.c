/* 12.16e */

#include <stdio.h>

#define N_DAYS 3
#define N_HOURS 5

float *find_largest(float *a, int n);

int main(void)
{
    int i;
    float temperatures[N_DAYS][N_HOURS] = 
    {
        {21.0f, 48.4f, 32.0f, 18.7f, 29.0f},
        {22.4f, 17.7f, 31.9f, 15.2f, 20.7f},
        {21.0f, 12.9f, 21.2f, 11.9f, 21.6f}
    };

    for (i = 0; i < N_DAYS; i++)
        printf("Largest temperature in row %d: %.1f°F\n", i, *find_largest(temperatures[i], N_HOURS));

    return 0;
}

float *find_largest(float *a, int n)
{
    float *largest = a;
    float *p;

    for (p = a + 1; p < a + n; p++)
    {
        if (*p > *largest)
            largest = p;
    }

    return largest;
}
