#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long total_seconds = 3623;
    int hr = 0, min = 0, sec = 0;

    split_time(total_seconds, &hr, &min, &sec);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = total_sec % 60;

    printf("Hours: %d, minutes: %d, seconds: %d\n", *hr, *min, *sec);
}
