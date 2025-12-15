#include <stdio.h>
#include <stdlib.h>  /* abs */

#define N_ENTRIES 8

int main(void)
{
    int hours, minutes, minutes_since_midnight, i, closest, index;
    int departure_hours, departure_minutes, arrival_hours, arrival_minutes;

    int departures[N_ENTRIES] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrivals[N_ENTRIES] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time (hh:mm): ");
    scanf("%d:%d", &hours, &minutes);

    while (hours > 23 || minutes > 59)
    {
        printf("Invalid time\n");
        printf("Enter a 24-hour time (hh:mm): ");
        scanf("%d:%d", &hours, &minutes);
    }
    
    minutes_since_midnight = hours * 60 + minutes;

    closest = 1e4;  /* init */
    for (i = 0; i < N_ENTRIES; i++)
    {
        if (abs(departures[i] - minutes_since_midnight) < closest)
        {
            closest = abs(departures[i] - minutes_since_midnight);
            index = i;
        }
    }

    departure_minutes = departures[index] % 60;
    departure_hours = (departures[index] - departure_minutes) / 60;

    arrival_minutes = arrivals[index] % 60;
    arrival_hours = (arrivals[index] - arrival_minutes) / 60;

    if (departure_hours == 12)
        printf("Closest departure time is %d:%.2d ", 12, departure_minutes);
    else
        printf("Closest departure time is %d:%.2d ", (departure_hours % 12), departure_minutes);
    
    (departure_hours < 12) ? printf("a.m.") : printf("p.m.");
    
    if (arrival_hours == 12)
        printf(", arriving at %d:%.2d ", 12, arrival_minutes);
    else
        printf(", arriving at %d:%.2d ", (arrival_hours % 12), arrival_minutes);
    
    (arrival_hours < 12) ? printf("a.m.") : printf("p.m.");

    printf("\n");
    return 0;
}
