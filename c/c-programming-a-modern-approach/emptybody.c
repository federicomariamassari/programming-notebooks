#include <stdio.h>

int main(void)
{
    int m, n;

    m = 20;

/*  
    for (n = 0; m > 0; n++)
    {
        m /= 2;
        printf("m = %d\n", m);
    }
*/

    for (n = 0; m > 0 && (m /= 2) >= 0; n++)
    {
        printf("m = %d\n", m);
    }

    return 0;
}
