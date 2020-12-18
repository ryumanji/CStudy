/*
    読み込んだ整数値の符号を判定
*/
#include <stdio.h>

int main(void) {
    int no;
    printf("整数値を入力してください：");
    scanf("%d", &no);
    if (no == 0)
        puts("その数は0です。");
    else if (no > 0)
        puts("その数は正です。");
    else
        puts("その数は負です。");
    return 0;
}