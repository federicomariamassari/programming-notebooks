#include <stdio.h>

int main(void)
{
    int nletters = 1, nwords = 1;
    char ch;

    printf("Enter a sentence: ");

    scanf(" %c", &ch);

    while ((ch = getchar()) != '\n')
    {
        if (ch != ' ')
            nletters++;
        else
            nwords++;
    }

    printf("Letters: %d, Words: %d\n", nletters, nwords);
    printf("Average word length: %.1f\n", (float) nletters / nwords);

    return 0;
}
