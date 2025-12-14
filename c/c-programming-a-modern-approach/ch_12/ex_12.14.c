/* 12.14e */

#include <stdio.h>
#include <stdbool.h>  /* C99 only */

#define N_DAYS 7
#define N_HOURS 24

bool search(const float *a, int n_days, int n_hours, float key);

int main(void)
{
    float temperatures[N_DAYS][N_HOURS];
    bool is_present;
    float key = 32.0;

    temperatures[5][15] = 32.0;

    is_present = search(&temperatures[0][0], N_DAYS, N_HOURS, key);

    printf("Is %.1f present? %s\n", key, is_present == 1 ? "true" : "false");

    return 0;
}

bool search(const float *a, int n_days, int n_hours, float key)
{
    const float *p;
    for (p = a; p < a + n_days * n_hours; p++)
        if (*p == key)
            return true;
    
    return false;
}
