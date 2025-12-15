#include <stdio.h>

int main(void)
{
    int i, j;
    int value = 1;
    int size = 0;  /* Array size */

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    
    while (size % 2 == 0)
    {
        printf("Enter size of magic square: ");
        scanf("%2d", &size);
    }

    int magic[size][size];  /* C99 only, variable-length array */

    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
            magic[i][j] = 0;

    magic[0][size / 2] = value;

    i = 0;
    j = size / 2;
    while (value < size * size)
    {
        if (i - 1 < 0)
            i = size;

        if (magic[(i-1) % size][(j+1) % size] == 0)
            magic[--i % size][++j % size] = ++value;
        else
            magic[++i % size][j % size] = ++value;
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
            printf("%5d", magic[i][j]);

        printf("\n");
    }

    return 0;
}
