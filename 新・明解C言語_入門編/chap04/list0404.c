/*
    整数値を次々と読み込んで合計と平均を表示
    ※復号代入演算子と後置増分演算子を利用
*/
#include <stdio.h>

int main(void) {
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("整数値を代入してください：");
        scanf("%d", &t);
        
        sum += t;
        cnt++;
        
        printf("まだ続けますか？<Yes...0/No...9>：");
        scanf("%d", &retry);
    } while (retry == 0);
    printf("合計は%dで平均は%.2fです。\n", sum, (double)sum / cnt);
    return 0;
}