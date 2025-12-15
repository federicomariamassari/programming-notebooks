#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j;

    i = 1;
    j = 2;

    printf("Before swapping, i = %d and j = %d\n", i, j);

    swap(&i, &j);

    printf("After swapping, i = %d and j = %d\n", i, j);

    return 0;
}

void swap(int *p, int *q)
{
    int temp;
    
    temp = *q;
    *q = *p;
    *p = temp;
}
