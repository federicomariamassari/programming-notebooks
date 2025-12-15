#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%4d", &n);

    printf("The number has ");

    if (n / 1000)
        printf("4");
    else if (n / 100)
        printf("3");
    else if (n / 10)
        printf("2");
    else
        printf("1");

    printf(" digits\n");

    return 0;
}
