#include <stdbool.h>  /* C99 only */
#include <stdio.h>

bool is_leap_year(int year);
int days_in_month(int month);
void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int year = 2000, month, day;
    int day_of_year = 61;

    printf("day_of_year: %d\n", day_of_year);
    split_date(day_of_year, year, &month, &day);
    printf("year: %d, month: %d, day: %d\n", year, month, day);

    return 0;
}

bool is_leap_year(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}

int days_in_month(int month)
{
    switch (month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 2:
            return 28;  /* extra day dealt with separately */
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return -1;
    }
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    *month = 1;

    /* TODO: This was done with Copilot */
    while (day_of_year > days_in_month(*month) + (is_leap_year(year) && *month == 2 ? 1 : 0))
    {
        day_of_year -= days_in_month(*month) + (is_leap_year(year) && *month == 2 ? 1 : 0);
        (*month)++;
    }

    *day = day_of_year;
}
