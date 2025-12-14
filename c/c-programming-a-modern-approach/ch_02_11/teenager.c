#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;
    bool teenager;

    printf("Age: ");
    scanf("%d", &age);

    teenager = (age >= 13) && (age <= 19);

    printf("Teenager? %d\n", teenager);

    return 0;
}
