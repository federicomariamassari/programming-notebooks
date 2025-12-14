#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <ctype.h>

#define N_LETTERS 26

void read_word(int counts[N_LETTERS]);
bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS]);

int main(void)
{
    int word1[N_LETTERS] = {0};
    int word2[N_LETTERS] = {0};

    printf("Enter first word: ");
    read_word(word1);
    
    printf("Enter second word: ");
    read_word(word2);

    printf("The words are ");
    equal_array(word1, word2) ? printf("") : printf("not ");
    printf("anagrams\n");

    return 0;
}

void read_word(int counts[N_LETTERS])
{
    char c;

    while ((c = getchar()) != '\n')
        if (isalpha(c))
            ++counts[tolower(c) - 'a'];
}

bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS])
{
    int i;

    for (i = 0; i < N_LETTERS; i++)
        if (counts1[i] != counts2[i])
            return false;

    return true;
}
