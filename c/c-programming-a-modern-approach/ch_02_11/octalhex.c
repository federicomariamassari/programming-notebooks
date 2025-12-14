#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i, j, k;
    
    i = 0777;    // 7 * 8^0 + 7 * 8^1 + 7 * 8^2 = 511
    j = 0x77;    // 7 * 16^0 + 7 * 10^1 = 119
    k = 0XABC;   // C * 16^0 + B * 16^1 + A * 16^2 = 12 + 176 + 2560 = 2748

    printf("i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}
