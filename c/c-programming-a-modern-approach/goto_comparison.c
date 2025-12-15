#include <stdio.h>

int main(void)
{
    int i;

/*
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            continue;

        printf("%d\n", i);
    }
*/

    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            goto loop_end;

        printf("%d\n", i);

        loop_end: ;
    }

    return 0;
}
