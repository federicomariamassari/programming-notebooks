#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
    int i, j, *p, *q;

    i = 1, j = 2;
    p = &i, q = &j;

    printf("%-10s i: %d, j: %d, *p: %d, *q: %d\n", "original", i, j, *p, *q);
    
    swap(&i, &j);
    
    printf("%-10s i: %d, j: %d, *p: %d, *q: %d\n", "swapped", i, j, *p, *q);

    return 0;
}

void swap(int *p, int *q)
{
  int temp;

  temp = *p;
  *p = *q;
  *q = temp;
}
