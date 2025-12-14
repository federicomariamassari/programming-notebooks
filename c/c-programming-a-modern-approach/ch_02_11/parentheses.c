#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;

    a = 1; b = 2; c = 3; d = 4; e = 5;
    int one, two, three, four;

    one = (a * b - c * d + e) == ((a * b) - (c * d) + e);
    two = (a / b % c / d) == (((a / b) % c) / d);
    three = (- a - b + c - + d) == ((((-a) - b) + c) - (+d));
    four = (a * - b / c - d) == ((a * (-b) / c) - d);

    printf("%d\n%d\n%d\n%d\n", one, two, three, four);

    return 0;
}
