#include <stdio.h>

int main(void) {
    int num;

    printf("���̐����F"); scanf("%d", &num);
    while (num-- > 0) {
        puts("*");
    }
    return 0;
}