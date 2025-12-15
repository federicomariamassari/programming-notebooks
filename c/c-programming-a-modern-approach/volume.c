#include <stdio.h>

#define PI 3.141593

int main(void)
{
    int radius = 10;

    float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

    printf("Volume of a sphere (radius = %d meters): %f\n", radius, volume);

    return 0;
}
