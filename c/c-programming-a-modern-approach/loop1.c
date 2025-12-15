#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);  // 5, 4, 3, 2. i > 0 unused as j = i - 1 and --i further decrements j = i - 1.

    return 0;
}
