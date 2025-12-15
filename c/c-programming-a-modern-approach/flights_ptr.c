#include <stdio.h>
#include <stdlib.h>  /* abs */

#define N_ENTRIES 8

const int departures[N_ENTRIES] = {480, 583, 679, 767, 840, 945, 1140, 1305};
const int arrivals[N_ENTRIES] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int desired_time, departure_time, arrival_time;

    do {
        printf("Enter desired time (minutes since midnight, <= 1440): ");
        scanf("%d", &desired_time);

    } while (desired_time > 1440);

    find_closest_flight(desired_time, &departure_time, &arrival_time);

    printf("Closest departure time is %d\n", departure_time);
    printf("Closest arrival time is %d\n", arrival_time);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int i, closest, index;

    closest = 1e4;  /* init */
    for (i = 0; i < N_ENTRIES; i++)
    {
        if (abs(departures[i] - desired_time) < closest)
        {
            closest = abs(departures[i] - desired_time);
            index = i;
        }
    }

    *departure_time = departures[index];
    *arrival_time = arrivals[index];
}
