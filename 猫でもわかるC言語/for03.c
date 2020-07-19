#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 4; i++) {
        printf("1st 'for' of outside, i = %d\n", i);

        for (j = 0; j < 3; j++) {
            printf("\t 'for' of inside', j = %d\n", j);
        }

        printf("2nd 'for' of outside, i = %d\n", i);
    }
    return 0;
}