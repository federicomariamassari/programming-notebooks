#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    //printf("|%%d%%f%%d|: ");
    //scanf("%d%f%d", &i, &x, &j);

    //printf("i = %d, x = %f, j = %d\n", i, x, j);

    printf("|%%f%%d%%f|: ");
    scanf("%f%d%f", &x, &i, &y);

    printf("x = %f, i = %d, y = %f\n", x, i, y);

    return 0;
}
