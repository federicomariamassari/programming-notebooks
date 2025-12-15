#include <stdio.h>
#include <ctype.h>

int main(void)
{
    short nvowels = 0;
    char ch;
    
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n')
    {
        switch(tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                nvowels++;
                break;
            
            default:
                break;
        }
    }

    printf("Your sentence contains %hd vowels.\n", nvowels);

    return 0;
}
