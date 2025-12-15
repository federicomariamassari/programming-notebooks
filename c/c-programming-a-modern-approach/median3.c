#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    double x = 12.3, y = 22.1, z = 11.7;

    printf("Median value: %f\n", median(x, y, z));

    return 0;
}

double median(double x, double y, double z)
{
    double res;

    if (x <= y)
    {
        if (y <= z)
            res = y;
        else if (x <= z)
            res = z;
        else
            res = x;
    }
    else 
    {
        if (z <= y)
            res = y;
        else if (x <= z)
            res = x;
        else 
            res = z;
    }

    return res;
}
