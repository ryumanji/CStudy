/*
    �\�����ꂽ������������ǂݍ���ō��v�l�ƕ��ϒl��\��
*/
#include <stdio.h>

int main(void) {
    int i = 0;
    int sum = 0;
    int num, tmp;

    printf("�����͉��ł����F");
    scanf("%d", &num);
    while (i < num) {
        printf("No.%d:", ++i);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("���v�l�F%d\n", sum);
    printf("���ϒl�F%.2f\n", (double)sum / num);
    
    return 0;
}