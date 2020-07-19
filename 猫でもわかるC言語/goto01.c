#include <stdio.h>

int main()
{
    int i = 10;

    START:
    if (i > 0) {
        printf("Execute %2d times\n", 11 - i);
        i--;
        goto START;
    }
    return 0;
}