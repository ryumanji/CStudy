/*
    �ǂݍ��񂾐����̌�����*��\��(�D���Ȃ����J��Ԃ��j
*/
#include <stdio.h>

int main(void) {
    int retry;

    do {
        int i, no;
        do {
            printf("���̐�������͂��Ă��������F");
            scanf("%d", &no);
            if (no <= 0)
                puts("\a���łȂ�������͂��Ȃ��ł��������B");
        } while (no <= 0);

        for (i = 1; i <= no; i++)
            putchar('*');
        putchar('\n');

        printf("������x�H�yYes...0/No...9�z: ");
        scanf("%d", &retry);
    } while (retry == 0);
    return 0;
}