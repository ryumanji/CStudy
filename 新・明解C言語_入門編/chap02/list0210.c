/*
    ��̐����l��ǂݍ���ŕ��ϒl�������ŕ\��(�L���X�g�𗘗p)
*/
#include <stdio.h>

int main(void){
    int a, b;
    puts("��̐�������͂��Ă�������");
    printf("����a: ");  scanf("%d", &a);
    printf("����b: ");  scanf("%d", &b);
    printf("�����̕��ϒl��%f�ł�", (double)(a + b) / 2);
    return 0;
}