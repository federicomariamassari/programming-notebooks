#include <stdio.h>

#define PI 3.141593

int main(void)
{
    float radius, volume;
    
    printf("Enter the sphere radius (in meters): ");
    scanf("%f", &radius);

    volume = (4.f / 3.f) * PI * (radius * radius * radius);

    printf("The volume of the sphere is: %.2f meters\n", volume);
    
    return 0;
}
