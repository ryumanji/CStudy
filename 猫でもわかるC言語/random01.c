#define RECORDLEN 33

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char filename[256], data[16], ans[8];
    int no;

    printf("File Name(no extention)--");
    fgets(filename, sizeof(filename) - sizeof(".txt"), stdin);
    filename[strlen(filename) - 1] = '\0';
    fp = fopen(strcat(filename, ".txt"), "r");
    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    }

    while (1) {
        printf("What number of the data do you read?--");
        fgets(ans, sizeof(ans), stdin);
        no = atoi(ans);
        fseek(fp, RECORDLEN * (no - 1), SEEK_SET);
        if (fscanf(fp, "%s", data) == EOF) {
            perror("[ERROR] File Read Failed\n");
            continue;
        }
    printf("[Name] %s", data);
    fscanf(fp, "%s", data);
    printf("[Call Number] %s\n", data);
    printf("Do you continue?(y/n)");

    fgets(ans, sizeof(ans), stdin);
    ans[strlen(ans) - 1] = '\0';
    if (strcmp(ans, "n") == 0 || strcmp(ans, "N") == 0)
        break;
    }

    fclose(fp);

    return 0;
}