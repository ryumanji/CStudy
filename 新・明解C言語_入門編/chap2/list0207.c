/*
    ��̎����l��ǂݍ���Řa�E���E�ρE���������ŕ\��
*/
#include <stdio.h>

int main(void){
    double vx, vy;
    puts("����vx: ");   scanf("%lf", &vx);
    puts("����vy: ");   scanf("%lf", &vy);

    printf("vx + vy = %f\n", vx + vy);
    printf("vx - vy = %f\n", vx - vy);
    printf("vx * vy = %f\n", vx * vy);
    printf("vx / vy = %f\n", vx / vy);
    return 0;
}