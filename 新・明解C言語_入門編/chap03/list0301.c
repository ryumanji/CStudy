/*
    �ǂݍ��񂾐����l��5�Ŋ���؂�Ȃ���
*/

#include <stdio.h>

int main(void) {
    int no;
    printf("��������͂��ĉ������F");
    scanf("%d", &no);
    if (no % 5)
        puts("���̐���5�Ŋ���؂�܂���B");
    return 0;
}