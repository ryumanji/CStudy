#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[256];
    int c;

    printf("File Name(no extention)--");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';
    strcat(filename, ".txt");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    }

    while (fscanf(fp, "%c", &c) != EOF)
        printf("%c", c);

    fclose(fp);
    return 0;

}