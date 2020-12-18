/*
    読み込んだ整数値の最も下のケタの数字を表示
*/
#include <stdio.h>

int main(void) {
    int no;
    printf("整数値を入力して下さい：");
    scanf("%d", &no);
    printf("最も下のケタは%dです。", no%10);
    return 0;
}