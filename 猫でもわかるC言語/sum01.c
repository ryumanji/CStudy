#include <stdio.h>

int main()
{
    int sum = 0, p;

    while (1) {
        printf("Point(end:999)----");
        scanf("%d", &p);
        if (p >= 999)
            break;
        sum = sum + p;
    }

    printf("Sum: %d points\n", sum);

    return 0;
}