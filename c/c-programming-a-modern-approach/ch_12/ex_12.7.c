/* 12.7e */

#include <stdio.h>
#include <stdbool.h>  /* C99 only */

#define N 5

bool search(const int a[], int n, int key);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5};
    int key = 5;
    
    printf("%d %s contained\n", key, search(a, N, key) == 1 ? "is" : "is not");

    return 0;
}

bool search(const int a[], int n, int key)
{
    const int *p;
    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;
    
    return false;
}
