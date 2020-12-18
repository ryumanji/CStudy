/*
    読み込んだ正の整数値を逆順に表示
*/
#include <stdio.h>

int main(void) {
    int no;

    do {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a正でない整数を入力しないでください。");
    } while (no <= 0);
        printf("その数を逆から読むと");
        while (no > 0) {
            printf("%d", no % 10);
            no /= 10;
        }
    puts("です。");
    return 0;
}