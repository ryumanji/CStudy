/*
    ���������p�񓙕ӎO�p�`��\��
*/
#include <stdio.h>

int main(void) {
    int i, j, len;

    puts("�������p�񓙕ӎO�p�`�����܂��B");
    printf("�Z�ӁF");
    scanf("%d", &len);

    for (i = 1; i <= len; i++) {
        for (j = 1; j <= i; j++) 
            putchar('*');
        putchar('\n');
    }
    
    return 0;
}