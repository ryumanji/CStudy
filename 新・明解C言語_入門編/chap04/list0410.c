/*
    �ǂݍ��񂾐��̐����l���t���ɕ\��
*/
#include <stdio.h>

int main(void) {
    int no;

    do {
        printf("���̐�������͂��Ă��������F");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a���łȂ���������͂��Ȃ��ł��������B");
    } while (no <= 0);
        printf("���̐����t����ǂނ�");
        while (no > 0) {
            printf("%d", no % 10);
            no /= 10;
        }
    puts("�ł��B");
    return 0;
}