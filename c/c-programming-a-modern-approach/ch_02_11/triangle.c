#include <stdio.h>

double triangle_area(double base, double height)
{
    double product;

    product = base * height;
    return product / 2;
}

int main(void)
{
    double base, height, area;
    
    printf("Enter triangle base: ");
    scanf("%lf", &base);

    printf("Enter triangle height: ");
    scanf("%lf", &height);

    area = triangle_area(base, height);

    printf("The area is: %lf\n", area);

    return 0;
}
