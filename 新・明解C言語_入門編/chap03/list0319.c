/*
    読み込んだ整数値を3で割った剰余を表示
*/
#include <stdio.h>

int main(void) {
    int no;
    printf("整数を入力して下さい: ");
    scanf("%d", &no);

    switch (no % 3) {
        case 0 : puts("その数は３で割り切れます。");        break;
        case 1 : puts("その数は３で割った剰余は１です。");  break;
        case 2 : puts("その数は３で割った剰余は２です。");  break;
    }

    return 0;
}