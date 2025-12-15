#include <stdbool.h>  /* C99 only */
#include <stdio.h>

int day_of_year(int month, int day, int year);
bool is_leap_year(int year);
int days_in_month(int month);

int main(void)
{
    int month, day, year;

    printf("Enter month, day, year (mm/dd/YYYY): ");
    scanf("%d/%d/%4d", &month, &day, &year);

    printf("Number of days till date: %d\n", day_of_year(month, day, year));

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

int day_of_year(int month, int day, int year)
{
    int days, i;

    days = 0;
    for (i = 1; i < month; i++)
        days += days_in_month(i);

    if (is_leap_year(year) && month > 2)
        days++;

    days += day;
    
    return days;
}
