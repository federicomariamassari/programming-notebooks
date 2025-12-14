#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void)
{
    int n = 0;

    while (n % 2 == 0 || n > 11)   /* 8-bit signed char max value is 127 */
    {
        printf("Enter an odd integer (up to 11): ");
        scanf("%2d", &n);
    }

    char magic[n][n];

    create_magic_square(n, magic);
    print_magic_square(n, magic);

    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    int i, j;
    char value = 1;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            magic_square[i][j] = 0;

    i = 0;
    j = n / 2;
    magic_square[i][j] = value;  /* init */

    while (value < n * n)
    {
        if (i - 1 < 0)
            i = n;

        if (magic_square[(i - 1) % n][(j + 1) % n] == 0)
            magic_square[--i % n][++j % n] = ++value;
        else
            magic_square[++i % n][j % n] = ++value;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int i, j;

    for (i = 0; i < n; i++)
    {    
        for (j = 0; j < n; j++)
            printf("%5d ", magic_square[i][j]);

        printf("\n");
    }
}
