/*
    �ǂݍ��񂾒�k�̋G�߂�\��
*/
#include <stdio.h>

int main(void) {
    int month;
    printf("�����ł����H");
    scanf("%d", &month);

    if (month >= 3 && month <= 5)
        printf("%d���͏t�ł��B\n", month);
    else if (month >= 6 && month <= 8)
        printf("%d���͉Ăł��B\n", month);
    else if (month >= 9 && month <= 11)
        printf("%d���͏H�ł��B\n", month);
    else if (month == 1 || month == 2 || month == 12)
        printf("%d���͓~�ł��B\n", month);
    else
        printf("%d���͂���܂���!\a\n", month);
    return 0;
}