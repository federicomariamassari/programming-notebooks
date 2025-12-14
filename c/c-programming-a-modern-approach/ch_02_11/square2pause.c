#include <stdio.h>

int main(void)
{
    int i, n;

    printf("The program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    getchar();  // To dispose of newline after a number of entries

    for (i = 1; i < n; i++)
    {
        printf("%10d%10d\n", i, i * i);

        if (i % 24 == 0)
        {
            printf("Press Enter to continue... ");
            getchar();
        }
    }
    
    return 0;
}
