#include <stdio.h>

#define LENGTH 20

int main(void)
{
    char initial, c;
    char lastname[LENGTH];
    int i;

    printf("Enter a first and last name: ");
    initial = getchar();

    while (getchar() != ' ')
        ;

    i = 0;
    while ((c = getchar()) != '\n' && i < LENGTH)
        lastname[i++] = c;
    
    if (i < LENGTH)
        lastname[i] = '\0';  /* Stopping condition */

    printf("You entered the name: ");
    for (i = 0; i < LENGTH && lastname[i] != '\0'; i++)
        printf("%c", lastname[i]);

    printf(", %c.\n", initial);

    return 0;
}
