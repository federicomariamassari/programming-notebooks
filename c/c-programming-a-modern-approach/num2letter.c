#include <stdio.h>

int main(void)
{
    int num_grade, tens;

    printf("Enter numerical grade: ");
    scanf("%d", &num_grade);

    if (num_grade < 0 || num_grade > 100)
        printf("Error: Invalid grade\n");
    else
    {
        tens = num_grade / 10;

        printf("Letter grade: ");

        switch (tens)
        {
            case (10): case (9):
                printf("A\n");
                break;
            case (8):
                printf("B\n");
                break;
            case (7):
                printf("C\n");
                break;
            case (6):
                printf("D\n");
                break;
            default:
                printf("F\n");
                break;
        }
    }

    return 0;
}
