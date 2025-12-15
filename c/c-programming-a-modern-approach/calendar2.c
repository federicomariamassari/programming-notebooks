#include <stdio.h>

int main(void)
{
    int i, day, ndays, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &ndays);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%1d", &starting_day);

    for (i = 1; i < starting_day; i++)
        printf("%4c", ' ');

    for (i = 1, day = starting_day; i <= ndays; i++, day++)
    {
        if (day > 7)
        {
            printf("\n");
            day = 1;
        }

        printf("%3d ", i);
    }

    printf("\n");

    return 0;
}
