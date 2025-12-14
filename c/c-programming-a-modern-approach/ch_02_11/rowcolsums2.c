#include <stdio.h>

#define N 5

int main(void)
{
    int i, j;
    int grades[N][N];
    int totals[N] = {0}, quiz_totals[N] = {0}, high[N] = {0}, low[N] = {0};

    /* High, low are unnecessary here, can just be computed and printed per line. */

    for (i = 0; i < N; i++)
    {
        printf("Enter %d grades for student %d: ", N, i + 1);

        for (j = 0; j < N; j++)
            scanf("%d", &grades[i][j]);
    }

    printf("\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            totals[i] += grades[i][j];
    
    for (j = 0; j < N; j++)
    {
        low[j] = grades[0][j];
        high[j] = grades[0][j];

        for (i = 0; i < N; i++)
        {
            quiz_totals[j] += grades[i][j];
            
            if (low[j] > grades[i][j])
                low[j] = grades[i][j];
            
            if (high[j] < grades[i][j])
                high[j] = grades[i][j];
        }
    }

    printf("Student   Total score   Average score\n");
    for (i = 0; i < N; i++)
        printf("%4d %12d %14.1f\n", i + 1, totals[i], (float) totals[i] / N);

    printf("\n");
    printf(" Quiz    Average score   High   Low\n");
    for (j = 0; j < N; j++)
        printf("%4d %13.1f %9d %5d\n", j + 1, (float) quiz_totals[j] / N, high[j], low[j]);

    return 0;
}
