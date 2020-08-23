#include <stdio.h>
#include <string.h>

int mywrite(FILE *);

int main()
{
    FILE *fp;
    char filename[256];

    printf("FileName(no extention)---");
    fgets(filename, sizeof(filename), stdin);
    filename[strlen(filename) - 1] = '\0';
    strcat(filename, ".txt");

    fp = fopen(filename, "a");
    if (fp == NULL) {
        perror("File Open Failed");
        return -1;
    }
    while (!mywrite(fp));

    fclose(fp);
    return 0;
}

int mywrite(FILE *f)
{
    char name[16];
    char tel[16];
    char yesno[8];
    char *format = "%-15s %-15s\n";

    printf("Name--");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("Call Number--");
    fgets(tel, sizeof(tel), stdin);
    tel[strlen(tel) - 1] = '\0';

    printf(format, name, tel);
    printf("Do you write this data?(y/n):");
    fgets(yesno, sizeof(yesno), stdin);
    yesno[strlen(yesno) - 1] = '\0';
    if (strcmp(yesno, "Y") == 0||strcmp(yesno, "y") == 0)
        fprintf(f, format, name, tel);
    
    printf("Do you write data more?(y/n):");
    fgets(yesno, sizeof(yesno), stdin);
    yesno[strlen(yesno) - 1] = '\0';
    if (strcmp(yesno, "N") == 0||strcmp(yesno, "n") == 0)
        printf("bye");
        return -1;
    
    return 0;
}