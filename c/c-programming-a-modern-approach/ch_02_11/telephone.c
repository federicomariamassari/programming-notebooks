#include <stdio.h>

int main(void)
{
    int area_code, prefix, unique;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &prefix, &unique);

    printf("You entered %d.%d.%d\n", area_code, prefix, unique);
    
    return 0;
}
