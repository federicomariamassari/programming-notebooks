#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hours, &minutes);

    printf("Equivalent 12-hour time: ");

    if (hours > 12)
        printf("%2d:%.2d PM\n", hours -= 12, minutes);

    else
        (hours == 0) ? printf("12:%.2d AM\n", minutes) : printf("%2d:%.2d PM\n", hours, minutes);

    return 0;
}
