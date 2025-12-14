#include <stdio.h>

#define MAX_LENGTH 100

void print_reversal(int *a, int *pos);

int main(void)
{
    int message[MAX_LENGTH], *p = message;
    char c;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && (p - message) < (MAX_LENGTH - 1))
        *p++ = c;
    *p = '\0';

    print_reversal(message, p);

    return 0;
}

void print_reversal(int *a, int *pos)
{
    printf("Reversal is: ");
    while (pos - a >= 0)
        printf("%c", *pos--);
    
    printf("\n");
}
