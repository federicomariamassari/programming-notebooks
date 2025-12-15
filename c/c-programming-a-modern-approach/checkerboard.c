#include <stdio.h>

#define SIZE 8

int main(void)
{
    int i, j;
    char checkerboard[SIZE][SIZE];

    for (i = 0; i < SIZE; i++)
        for (j = 0; j < SIZE; j++)
        {
            if ((i + j) % 2 == 0)
                checkerboard[i][j] = 'B';
            else
                checkerboard[i][j] = 'R';
        }
    
    for (i = 0; i < SIZE; i++)
    {    
        for (j = 0; j < SIZE; j++)
            printf("%c ", checkerboard[i][j]);
    
        printf("\n");
    }
    
    return 0;
}
