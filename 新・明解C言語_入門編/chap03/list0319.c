/*
    �ǂݍ��񂾐����l��3�Ŋ�������]��\��
*/
#include <stdio.h>

int main(void) {
    int no;
    printf("��������͂��ĉ�����: ");
    scanf("%d", &no);

    switch (no % 3) {
        case 0 : puts("���̐��͂R�Ŋ���؂�܂��B");        break;
        case 1 : puts("���̐��͂R�Ŋ�������]�͂P�ł��B");  break;
        case 2 : puts("���̐��͂R�Ŋ�������]�͂Q�ł��B");  break;
    }

    return 0;
}