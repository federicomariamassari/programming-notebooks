/* 8.14p */
#include <stdio.h>

#define MAX_LEN 80

int main(void)
{
    char c, stop_char;
    char sentence[MAX_LEN];
    char *p = sentence, *q;

    printf("Enter a sentence: ");
    while (p < sentence + MAX_LEN - 1)
    {
        c = getchar();
        if (c == '.' || c == '!' || c == '?')
        {
            stop_char = c;
            break;
        }

        *p++ = c;
    }

    *p-- = '\0';  /* go back one step immediately after */

    printf("Reversal of sentence: ");
    
    while (p >= sentence)
    {
        while (p >= sentence && *p != ' ')
            p--;

        q = p + 1;
        while (*q != ' ' && *q != '\0')
            putchar(*q++);

        if (p >= sentence)
            putchar(' ');

        p--;
    }

    printf("%c\n", stop_char);

    return 0;
}
