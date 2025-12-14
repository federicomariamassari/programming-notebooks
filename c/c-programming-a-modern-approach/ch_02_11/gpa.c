#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 20

float compute_GPA(char grades[], int n);

int main(void)
{
    char c, grades[MAX_LENGTH];
    int i = 0, n = 0;

    printf("Enter an array of grades: ");
    while ((c = getchar()) != '\n' && i < MAX_LENGTH)
    {
        if (c == ' ')
            ;
        else
            grades[i++] = c;
    } 

    grades[i] = '\0';  /* No more grades */

    for (i = 0; i < MAX_LENGTH; i++)
    {
        if (grades[i] == '\0')
            break;
        n++;
    }

    printf("GPA: %.2f\n", compute_GPA(grades, n));

    return 0;
}

float compute_GPA(char grades[], int n)
{
    float gpa = 0.0f;
    int i;

    for (i = 0; i < n; i++)
    {
        switch (toupper(grades[i]))
        {
            case 'A':
                gpa += 4;
                break;
            case 'B':
                gpa += 3;
                break;
            case 'C':
                gpa += 2;
                break;
            case 'D':
                gpa += 1;
                break;
            case 'F':
                gpa += 0;
                break;
            default:
                break;
        }
    }

    return gpa / n;
}
