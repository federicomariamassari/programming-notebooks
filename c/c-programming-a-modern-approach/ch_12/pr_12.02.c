#include <stdio.h>
#include <ctype.h>  /* isalpha */
#include <stdbool.h>  /* C99 only */

#define MAX_LENGTH 100

int main(void)
{
    int message[MAX_LENGTH];
    int *p = message, *q = message;
    char c;
    bool is_palindrome = true;

    printf("Enter a message: ");
    while ((c = getchar()) != '\n' && (p - message) < (MAX_LENGTH - 1))
        if (isalpha(c))
            *p++ = tolower(c);

    while (p - message >= 0)
        if (*--p != *q++)
            is_palindrome = false;

    printf("%s\n", is_palindrome ? "Palindrome" : "Not a palindrome");

    return 0;
}
