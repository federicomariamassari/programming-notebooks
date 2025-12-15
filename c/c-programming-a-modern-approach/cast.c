#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float f, frac_part;

    printf("Enter a float value: ");
    scanf("%f", &f);

    frac_part = f - (int) f;

    printf("The fractional part is: %f\n", frac_part);

    return 0;
}
