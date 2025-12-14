#include <stdio.h>

int main(void)
{
    int i, *p;

    p = &i;
    i = 1;

    /* Only two work */
    printf("i: %d, *p: %d, *&i: %d\n", i, *p, *&i);

    return 0;
}
