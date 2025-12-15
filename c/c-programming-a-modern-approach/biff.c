#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
    char c, message[SIZE] = {0};
    int i = 0;

    printf("Enter message: ");
    while ((c = getchar()) != '\n' && i < SIZE)
        message[i++] = c;

    for (i = 0; i < SIZE; i++)
    {
        switch (toupper(message[i]))
        {
            case 'A':
                message[i] = '4';
                break;
            case 'B':
                message[i] = '8';
                break;
            case 'E':
                message[i] = '3';
                break;
            case 'I':
                message[i] = '1';
                break;
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
            default:
                message[i] = toupper(message[i]);
                break;
        }
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < SIZE; i++)
        printf("%c", message[i]);

    printf("!!!!!!!!!!\n");

    return 0;
}
