/*
    �ǂݍ��񂾐����l�͊�ł��邩�A�����ł��邩�i�D���Ȃ����J��Ԃ���j
*/
#include <stdio.h>

int main(void) {
    int retry;
    do {
        int no;
        printf("��������͂��Ă�������: ");
        scanf("%d", &no);
        if (no % 2)
            puts("���̐��͊�ł��B");
        else
            puts("���̐��͋����ł��B");
        printf("������x�H�yYes...0/No...9�z:");
        scanf("%d", &retry);
    } while (retry == 0);
    return 0;
}