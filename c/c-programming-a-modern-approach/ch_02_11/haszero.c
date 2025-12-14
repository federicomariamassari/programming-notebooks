#include <stdbool.h>  /* C99 only */
#include <stdio.h>

bool has_zero(int a[], int n);

int main(void)
{
    int n = 5;
    int a[] = {2, 0, 3, 3, 5};
    
    printf("Has zero? %d\n", has_zero(a, n));

    return 0;
}

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
    
    return false;  /* Convert from else statement */
}
