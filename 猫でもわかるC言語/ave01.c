#include <stdio.h>

int main()
{
    int sum = 0, p = 0, n = 0;
    
    while (p != 999) {
        printf("Point(end 999)---");
        scanf("%d", &p);
        if ( p!= 999) {
            sum = sum + p;
            n++;
        }
    }
    printf("%d points is sum of %d people\n", sum, n);
    printf("average is%5.1f points\n", (double)sum / n);

    return 0;
}