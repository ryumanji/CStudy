/*
    読み込んだ整数値の5倍を表示
*/
#include <stdio.h>

int main(void) {
    int no;
    printf("整数を入力してください。: ");
    scanf("%d", &no);
    printf("その数の5倍は%dです。", no*5);
    return 0;
}