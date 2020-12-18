#include <stdio.h>

int main(void) {
    int num;

    printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: "); scanf("%d", &num);
    while (num-- > 0) {
        if (num % 2) {
            putchar('+');
        } else {
            putchar('-');
        }
    }
    return 0;
}