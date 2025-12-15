#include <stdio.h>
#include <ctype.h>

#define LENGTH 15

int main(void)
{
    char c, phone[LENGTH];
    int i;
    
    i = 0;
    
    printf("Enter phone number: ");
    while ((c = getchar()) != '\n')
        phone[i++] = toupper(c);

    for (i = 0; i < LENGTH; i++)
    {
        switch (phone[i])
        {
            case 'A': case 'B': case 'C':
                printf("%c", '2');
                break;
            
            case 'D': case 'E': case 'F':
                printf("%c", '3');
                break;

            case 'G': case 'H': case 'I':
                printf("%c", '4');
                break;

            case 'J': case 'K': case 'L':
                printf("%c", '5');
                break;

            case 'M': case 'N': case 'O':
                printf("%c", '6');
                break;

            case 'P': case 'R': case 'S':
                printf("%c", '7');
                break;

            case 'T': case 'U': case 'V':
                printf("%c", '8');
                break;

            case 'W': case 'X': case 'Y':
                printf("%c", '9');
                break;

            default:
                printf("%c", phone[i]);
                break;
        }
    }

    printf("\n");

    return 0;
}
