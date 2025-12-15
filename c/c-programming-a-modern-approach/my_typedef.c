#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(void)
{
    Int8 c = '\a';
    Int16 s = 32767;
    Int32 i = 4500000;

    printf("c = %c, s = %hd, i = %d\n", c, s, i);

    return 0;
}
