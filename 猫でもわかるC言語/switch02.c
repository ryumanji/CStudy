# include <stdio.h>

int main()
{
    int c;
    int end = 0;

    while (1) {
        printf("***** MENU *****\n");
        printf("A: �Q�[��\n");
        printf("B: ���y\n");
        printf("C: �\�v�Z\n");
        printf("X: �I��\n");
        printf("****************\n");
        printf("----->");
    
    while (1) {
        c = getchar();
        if (c != '\n')
            break;
    }

        switch (c) {
            case 'A':
            case 'a':
                printf("\n �Q�[���΂��肵�Ȃ��ł������� \n\n");
                break;
            case 'B':
            case 'b':
                printf("\n ���y���I������܂��� \n\n");
                break;
            case 'C':
            case 'c':
                printf("\n �\�v�Z���I������܂��� \n\n");
                break;
            case 'X':
            case 'x':
                end = 1;
                break;
            default:
                printf("\n �s���ȓ��͂ł� \n\n");
                break;
        }
        if (end == 1)
        break;
    }
    printf("\n �I���ł�");
    return 0;
}
