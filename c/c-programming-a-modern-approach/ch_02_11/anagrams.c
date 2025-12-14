#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <ctype.h>

#define N_LETTERS 26

int main(void)
{
    bool match = true;
    char c;
    int i, counter[N_LETTERS] = {0};
    
    printf("Enter first word: ");
    while ((c = getchar()) != '\n')
        if (isalpha(c))
            counter[tolower(c) - 'a']++;

    printf("Enter second word: ");
    while ((c = getchar()) != '\n')
        if (isalpha(c))
            counter[tolower(c) - 'a']--;

    for (i = 0; i < N_LETTERS; i++)
    {
        if (counter[i] != 0)
        {
            match = false;
            printf("The words are not anagrams.\n");
            break;  /* Early termination */
        }
    }

    if (match)
        printf("The words are anagrams.\n");

    return 0;
}
