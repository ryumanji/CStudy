/*
    �ǂݍ��񂾓�̐����l�̑傫�����̒l��\���i���̂R�F�������Z�q�j
*/
#include <stdio.h>
int main(void) {
    int n1, n2, max;
    puts("��̐�������͂��Ă�������");
    printf("�����P: "); scanf("%d", &n1);
    printf("�����Q: "); scanf("%d", &n2);
    max = (n1 > n2 ? n1:n2);
    printf("�傫�����̒l��%d�ł��B\n", max);
    return 0;
}