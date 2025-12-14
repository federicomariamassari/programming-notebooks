#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int evaluate_position(const char *board, int n);

void print_advantage(int advantage);

int main(void)
{
    int advantage;
    const char *p;
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

    /* print current chessboard */
    for (p = chessboard[0]; p < chessboard[0] + SIZE * SIZE; p++)
    {
        printf("%c ", *p);

        if ((p - chessboard[0] + 1) % SIZE == 0)
            printf("\n");
    }
    
    printf("\n");

    /* evaluate current position */
    advantage = evaluate_position(chessboard[0], SIZE);
    print_advantage(advantage);

    return 0;
}

int evaluate_position(const char *board, int n)
{
    const char *p;
    int sum_white = 0, sum_black = 0;

    for (p = board; p < board + n * n; p++)
    {
        switch(*p)  /* king does not have point value */
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

    return sum_white - sum_black;  /* white advantage if positive */
}

void print_advantage(int advantage)
{
    printf("\nSituation: ");

    if (advantage > 0)
        printf("White has %d points of advantage in material\n", abs(advantage));
    else if (advantage < 0)
        printf("Black has %d points of advantage in material\n", abs(advantage));
    else
        printf("No side has any current advantage in material\n");
}
