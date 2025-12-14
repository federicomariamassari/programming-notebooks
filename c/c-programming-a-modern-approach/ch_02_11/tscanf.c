#include <stdio.h>

int main(void)
{
    float i, j, k, l;

    /*
    printf("|%%d|: ");
    scanf("%d", &i);

    printf("| %%d|: ");
    scanf(" %d", &j);

    printf("i = %d, j = %d\n", i, j);

    printf("|%%d-%%d-%%d|:");
    scanf("%d-%d-%d", &i, &j, &k);

    printf("i = %d, j = %d, k = %d\n", i, j, k);

    printf("|%%d -%%d -%%d|:");
    scanf("%d -%d -%d", &i, &j, &k);

    printf("i = %d, j = %d, k = %d\n", i, j, k);
   */

    /*printf("|%%f|:");
    scanf("%f", &i);

    printf("|%%f |:");
    scanf("%f ", &j);*/

    printf("|%%f,%%f|: ");
    scanf("%f,%f", &i, &j);

    printf("|%%f, %%f|: ");
    scanf("%f, %f", &k, &l);
    
    printf("i = %f, j = %f, k = %f, l = %f\n", i, j, k, l);

    return 0;
}
