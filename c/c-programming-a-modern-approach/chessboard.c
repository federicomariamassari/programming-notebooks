#include <stdio.h>

#define SIZE 8

int main(void)
{
    int i, j;
    char chess_board[SIZE][SIZE] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {0}, {0}, {0}, {0},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    };

    for (i = 0; i < SIZE; i++)
    {    for (j = 0; j < SIZE; j++)
            printf("%c ", chess_board[i][j]);
    
        printf("\n");
    }
    
    return 0;
}
