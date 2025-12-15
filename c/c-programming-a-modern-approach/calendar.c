#include <stdio.h>

int main(void)
{
    int mm1, dd1, yy1, mm2, dd2, yy2;
    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm1, &dd1, &yy1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy1 < yy2)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
    else
        if (yy1 == yy2)
            if (mm1 < mm2)
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
            else if (mm1 == mm2)
                (dd1 <= dd2) ? printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm1, dd1, yy1, mm2, dd2, yy2) 
                    : printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
            else
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
        else
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", mm2, dd2, yy2, mm1, dd1, yy1);

    return 0;
}
