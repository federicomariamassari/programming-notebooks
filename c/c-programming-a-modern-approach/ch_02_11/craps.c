#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <stdlib.h>  /* srand, rand */
#include <ctype.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int nwins = 0, nlosses = 0;
    char c;

    srand((unsigned) time(NULL));  /* seed init */

    for (;;)
    {
        play_game() ? ++nwins : ++nlosses;

        printf("\nPlay again? ");
        scanf(" %c", &c);

        if (tolower(c) != 'y')
            break;
    }

    printf("\nWins: %d, Losses: %d\n", nwins, nlosses);

    return 0;
}

int roll_dice(void)
{
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

bool play_game(void) {  /* TO REVIEW WITH OWN LOGIC */

    int dice = roll_dice();
    int point;

    printf("You rolled: %d\n", dice);

    if (dice == 7 || dice == 11) {
        printf("You win!\n\n");
        return true;
    }
    if (dice == 2 || dice == 3 || dice == 12) {
        printf("You lose!\n\n");
        return false;
    }
    
    printf("Your point is %d\n", point = dice);

    while ((dice = roll_dice())) {
        printf("You rolled: %d\n", dice);

        if (dice == point) {
            printf("You win!\n");
            return true;
        }
        if (dice == 7) {
            printf("You lose!\n");
            return false;
        }
    }
}
