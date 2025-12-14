/* Generates a random walk */

#include <stdio.h>
#include <stdlib.h>  /* rand, srand */
#include <time.h>

#define SIZE 10

int main(void)
{
    char letter = 'A';
    char maze[SIZE][SIZE];
    int i, j, direction;
    srand((unsigned) time(NULL));

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            maze[i][j] = '.';

    /* Initialize maze */
    maze[0][0] = letter;

    i = 0; j = 0;
    while (letter < 'Z')
    {
        direction = rand() % 4;

        switch (direction)
        {
            case 0:  /* North */
                if (i - 1 < 0 || maze[i-1][j] != '.')
                    break;
                
                --i;
                maze[i][j] = ++letter;
                break;

            case 1: /* East */
                if (j + 1 > SIZE || maze[i][j+1] != '.')
                    break;
                
                ++j;
                maze[i][j] = ++letter;
                break;

            case 2:  /* South */
                if (i + 1 > SIZE || maze[i+1][j] != '.')
                    break;
                
                ++i;
                maze[i][j] = ++letter;
                break;

            case 3:  /* West */
                if (j - 1 < 0 || maze[i][j-1] != '.')
                    break;
                
                --j;
                maze[i][j] = ++letter;
                break;

            default:
                break;
        }

        /* All roads are blocked */
        if (maze[i-1][j] != '.' && maze[i][j-1] != '.' && maze[i+1][j] != '.' && maze[i][j+1] != '.')
            break;
    }


    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            printf("%c ", maze[i][j]);

        printf("\n");
    }

    return 0;
}
