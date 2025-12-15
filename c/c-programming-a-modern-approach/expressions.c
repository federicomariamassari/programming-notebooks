#include <stdio.h>

int main(void)
{
    int i, j;

    i = 1;
    j = 2;

    i += j;  // 3, 2
    printf("i = %d, j = %d\n", i, j);  // 3, 2

    i--;  // 3
    printf("i = %d, j = %d\n", i, j);  // 2, 2

    i * j / 1;  // 4; result unused
    printf("i = %d, j = %d\n", i, j);  // 2, 2

    i % --j;  // 0; result unused
    printf("i = %d, j = %d\n", i, j);  // 2, 1

    return 0;
}
