#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int advantage;
int evaluate_position(char board[SIZE][SIZE]);

int main(void)
{
    int i, j;
    char chessboard[SIZE][SIZE] = {
        {'r', 'n', 'b', '.', 'k', 'b', 'n', 'r'},
        {'p', 'p', '.', 'p', 'p', 'p', 'p', 'p'},
        {'.', '.', 'p', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'.', '.', '.', '.', '.', '.', '.', '.'},
        {'P', '.', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    };

    for (i = 0; i < SIZE; i++)
    {    
        for (j = 0; j < SIZE; j++)
            printf("%c ", chessboard[i][j]);
    
        printf("\n");
    }
    
    printf("\nSituation: ");

    advantage = evaluate_position(chessboard);
    if (advantage > 0)
        printf("White has %d points of advantage in material\n", abs(advantage));
    else if (advantage < 0)
        printf("Black has %d points of advantage in material\n", abs(advantage));
    else
        printf("No side has any current advantage in material\n");

    return 0;
}

int evaluate_position(char board[SIZE][SIZE])
{
    int i, j;
    int sum_white = 0, sum_black = 0;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            switch(board[i][j])  /* King does not have point value */
            {
                case 'Q':
                    sum_white += 9;
                    break;
                case 'R':
                    sum_white += 5;
                    break;
                case 'B': case 'N':
                    sum_white += 3;
                    break;
                case 'P':
                    sum_white++;
                    break;
                case 'q':
                    sum_black += 9;
                    break;
                case 'r':
                    sum_black += 5;
                    break;
                case 'b': case 'n':
                    sum_black += 3;
                    break;
                case 'p':
                    sum_black++;
                    break;
                default:
                    break;
            }
        }
    }

    return sum_white - sum_black;  /* White advantage if positive */
}
