/*
    �����l�����X�Ɠǂݍ���ō��v�ƕ��ς�\��
    ������������Z�q�ƌ�u�������Z�q�𗘗p
*/
#include <stdio.h>

int main(void) {
    int sum = 0;
    int cnt = 0;
    int retry;

    do {
        int t;

        printf("�����l�������Ă��������F");
        scanf("%d", &t);
        
        sum += t;
        cnt++;
        
        printf("�܂������܂����H<Yes...0/No...9>�F");
        scanf("%d", &retry);
    } while (retry == 0);
    printf("���v��%d�ŕ��ς�%.2f�ł��B\n", sum, (double)sum / cnt);
    return 0;
}