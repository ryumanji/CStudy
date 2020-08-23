#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[256], name[16], tel[16];
    char *format = "%-15s %-15s\n";

    printf("File Name(no extention)--");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';
    strcat(filename, ".txt");
    fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    }

    while (fscanf(fp, "%s%s", name, tel) != EOF)
        printf(format, name, tel);

    fclose(fp);
    return 0;

}