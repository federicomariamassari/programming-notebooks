#include <stdio.h>
#include <stdlib.h>  /* rand, srand */
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[SIZE][SIZE]);
void print_array(char walk[SIZE][SIZE]);

int main(void)
{
    char walk[SIZE][SIZE];
    
    generate_random_walk(walk);
    print_array(walk);

    return 0;
}

void generate_random_walk(char walk[SIZE][SIZE])
{
    int i, j, direction;
    char letter = 'A';

    srand((unsigned) time(NULL));  /* init seed */

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
            walk[i][j] = '.';

    walk[0][0] = letter;  /* init random walk */

    i = 0; j = 0;
    while (letter < 'Z')
    {
        direction = rand() % 4;

        switch(direction)
        {
            case 0:  /* North */
                if (i - 1 < 0 || walk[i - 1][j] != '.')
                    break;

                walk[--i][j] = ++letter;
                break;

            case 1:  /* East */
                if (j + 1 >= SIZE || walk[i][j + 1] != '.')
                    break;

                walk[i][++j] = ++letter;
                break;
            
            case 2:  /* South */
                if (i + 1 >= SIZE || walk[i+1][j] != '.')
                    break;

                walk[++i][j] = ++letter;
                break;

            case 3:  /* West */
                if (j - 1 < 0 || walk[i][j - 1] != '.')
                    break;

                walk[i][--j] = ++letter;
                break;

            default:
                break;
        }

        /* All roads are blocked */
        if (walk[i - 1][j] != '.' && walk[i][j - 1] != '.' && walk[i + 1][j] != '.' && walk[i][j + 1] != '.')
            break;
    }
}

void print_array(char walk[SIZE][SIZE])
{
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
            printf("%c ", walk[i][j]);

        printf("\n");
    }
}
