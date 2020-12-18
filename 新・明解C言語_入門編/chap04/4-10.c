#include <stdio.h>

int main(void) {
    int num;

    printf("³‚Ì®”F"); scanf("%d", &num);
    while (num-- > 0) {
        puts("*");
    }
    return 0;
}