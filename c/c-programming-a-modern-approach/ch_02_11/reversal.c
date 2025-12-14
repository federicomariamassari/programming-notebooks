#include <stdio.h>

#define MAX_LENGTH 100

int main(void)
{
    char sentence[MAX_LENGTH];
    char c, terminating_char = '\0';
    int i;

    printf("Enter a sentence: ");

    i = 0;
    while ((c = getchar()) && i < MAX_LENGTH - 1)
    {
        if (c == '.' || c == '?' || c == '!')
        {
            terminating_char = c;
            sentence[i] = '\0';
            break;
        }

        sentence[i++] = c;
    }    

    printf("Reversal of sentence: ");
    /* TODO */



    printf("%c\n", terminating_char);

    return 0;
}
