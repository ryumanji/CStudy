# include <stdio.h>

int main()
{
    int c;
    int end = 0;

    while (1) {
        printf("***** MENU *****\n");
        printf("A: ゲーム\n");
        printf("B: 音楽\n");
        printf("C: 表計算\n");
        printf("X: 終了\n");
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
                printf("\n ゲームばかりしないでください \n\n");
                break;
            case 'B':
            case 'b':
                printf("\n 音楽が選択されました \n\n");
                break;
            case 'C':
            case 'c':
                printf("\n 表計算が選択されました \n\n");
                break;
            case 'X':
            case 'x':
                end = 1;
                break;
            default:
                printf("\n 不正な入力です \n\n");
                break;
        }
        if (end == 1)
        break;
    }
    printf("\n 終了です");
    return 0;
}
