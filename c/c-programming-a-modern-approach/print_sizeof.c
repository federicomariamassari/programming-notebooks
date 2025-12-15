#include <stdio.h>

int main(void)
{
    printf("sizeof(int): %lu bytes\n", sizeof(int));
    printf("sizeof(short): %lu bytes\n", sizeof(short));
    printf("sizeof(long): %lu bytes\n", sizeof(long));
    printf("sizeof(float): %lu bytes\n", sizeof(float));
    printf("sizeof(double): %lu bytes\n", sizeof(double));
    printf("sizeof(long double): %lu bytes\n", sizeof(long double));

    return 0;
}
