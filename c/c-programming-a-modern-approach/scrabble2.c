#include <stdio.h>
#include <ctype.h>

#define N_LETTERS 26

int main(void)
{
    char c;
    short int i, score = 0;
    int value[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    while ((c = getchar()) != '\n')
    {
        i = toupper(c) - 'A';
        score += value[i];
    }
    
    printf("Scrabble value: %hd\n", score);

    return 0;
}
