#include <stdio.h>

#define N_DAYS 30
#define N_HOURS 24

int main(void)  /* TO REVIEW */
{
    int i, j;
    float sum = 0.0f;
    float averages[N_DAYS] = {0.0f};
    float temperature_readings[N_DAYS][N_HOURS] = {{10.0f}, {2.0f, 12.4f}};

    for (i = 0; i < N_DAYS; i++)
    {
        for (j = 0; j < N_HOURS; j++)
            printf("%4.1f ", temperature_readings[i][j]);
        
        printf("\n");
    }

    printf("\n");
    printf("Averages:\n");

    for (i = 0; i < N_DAYS; i++)
    {
        for (j = 0; j < N_HOURS; j++)
            sum += temperature_readings[i][j];

        sum /= N_HOURS;
        averages[i] = sum;
        sum = 0.0f;
    }

    for (i = 0; i < N_DAYS; i++)
        printf("%4.3f ", averages[i]);

    printf("\n");

    return 0;
}
