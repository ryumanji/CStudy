/*
    二つの実数値を読み込んで和・差・積・商を実数で表示
*/
#include <stdio.h>

int main(void){
    double vx, vy;
    puts("実数vx: ");   scanf("%lf", &vx);
    puts("実数vy: ");   scanf("%lf", &vy);

    printf("vx + vy = %f\n", vx + vy);
    printf("vx - vy = %f\n", vx - vy);
    printf("vx * vy = %f\n", vx * vy);
    printf("vx / vy = %f\n", vx / vy);
    return 0;
}