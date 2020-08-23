#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("file01.txt", "w");

    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    } else {
        printf("File Open Success\n");
    }

    fprintf(fp, "First File I/O Data\n");

    if (fclose(fp) != 0) {
        perror("File Close Failed\n");
        return -1;
    } else {
        printf("File Close Success\n");
    }

    return 0;
}