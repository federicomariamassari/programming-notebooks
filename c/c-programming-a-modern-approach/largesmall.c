#include <stdio.h>

int main(void)
{
    int a, b, c, d, min1, min2, max1, max2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a < b)
    {
        min1 = a;
        max1 = b;
    }
    else
    {
        min1 = b;
        max1 = a;
    }

    if (c < d)
    {
        min2 = c;
        max2 = d;
    }
    else
    {
        min2 = d;
        max2 = c;
    }

    if (max1 < max2)
        largest = max2;
    else
        largest = max1;
    
    if (min1 < min2)
        smallest = min1;
    else
        smallest = min2;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
