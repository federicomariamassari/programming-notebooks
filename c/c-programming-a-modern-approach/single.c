#include <stdio.h>

int main(void)
{
    int i, j, result;

    printf("Enter a value for i: ");
    scanf("%d", &i);

    printf("Enter a value for j: ");
    scanf("%d", &j);

    result = (i > j) - (i < j);
    printf("%d\n", result);

    return 0;
}
