#include <stdio.h>

#define LENGTH 80

int main(void)
{
    int i, shift;
    char ch;
    char message[LENGTH];

    i = 0;
    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n')
        message[i++] = ch;
    message[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    for (i = 0; message[i] != '\0'; i++)
    {
        ch = message[i];
        if (ch >= 'A' && ch <= 'Z')  /* Uppercase */
            message[i] = ((ch - 'A') + shift) % 26 + 'A';

        else if (ch >= 'a' && ch <= 'z')
            message[i] = ((ch - 'a') + shift) % 26 + 'a';
    }

    printf("Encrypted message: ");
    for (i = 0; i < message[i] != '\0'; i++)
        printf("%c", message[i]);
    printf("\n");

    return 0;
}
