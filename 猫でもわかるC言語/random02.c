#define FNAME "meibo.txt"
#define RECORDLEN 88

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu();
int myread();
int mywrite();
int myrewrite();

char *format = "%-15s %-3d %-2s %-63s\n";

int main()
{
    int menuno;

    while (1) {
        menuno = menu();
        switch (menuno) {
            case 0:
                break;
            case 1:
                mywrite();
                break;
            case 2:
                myread();
                break;
            case 3:
                myrewrite();
                break;
            default:
                printf("Fail Data");
                break;
        }
        if (!menuno)
            break;
    }

    return 0;
}

int menu()
{
    char ret[8];

    while (1) {
        printf("************************\n");
        printf("1: Write Data(new/add)\n");
        printf("2: Read Data\n");
        printf("3: Modify Data\n");
        printf("0: Exit\n");
        printf("************************\n");
        printf("Select --> ");
        fgets(ret, sizeof(ret), stdin);
        ret[1] = '\0';
        if (ret[0] < '0' || ret[0] > '3') {
            printf("Fault Number\n");
            continue;
        }
        return atoi(ret);
    }
}

int mywrite()
{
    FILE *fp;
    char name[16], sex[4], address[64], buffer[8];
    int age;

    fp = fopen(FNAME, "a");
    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    }
    while (1) {
        printf("Name-- ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
        printf("Age-- ");
        fgets(buffer, sizeof(buffer), stdin);
        age = atoi(buffer);
        printf("Sex(M/F)-- ");
        fgets(sex, sizeof(sex), stdin);
        sex[strlen(sex) - 1] = '\0';
        printf("Address-- ");
        fgets(address, sizeof(address), stdin);
        address[strlen(address) - 1] = '\0';

        if (fprintf(fp, format, name, age, sex, address) < 0) {
            perror("ERROR Data Write Failed");
            break;
        }
        printf("Do you continue?(y/n): ");
        fgets(buffer, sizeof(buffer), stdin);
        if (buffer[0] == 'n' || buffer[0] == 'N')
            break;
    }

    fclose(fp);
    return 0;
}

int myread()
{
    FILE *fp;
    char search[16], yesno[8], name[16], sex[4], address[64];
    int no = 0, find = 0, age;

    fp = fopen(FNAME, "r");
    if (fp == NULL) {
        perror("File Open Filed\n");
        return -1;
    }

    printf("Name to Search");
    fgets(search, sizeof(search), stdin);
    search[strlen(search) - 1] = '\0';

    while (1) {
        fseek(fp, RECORDLEN * no++, SEEK_SET);
        if (fscanf(fp, "%s", name) == EOF)
            break;
        if (strstr(name, search) != NULL) {
            find++;
            fscanf(fp, "%d", &age);
            fscanf(fp, "%s", sex);
            fscanf(fp, "%s", address);
            printf("Name: %s\n", name);
            printf("Age: %d\n", age);
            printf("Sex: %s\n", sex);
            printf("Address: %s", address);
            printf("-------------------\n");
            printf("Do you search continue?(Y/N): ");
            fgets(yesno, sizeof(yesno), stdin);
            if (yesno[0] == 'y' || yesno[0] == 'Y')
                continue;
            else
                break;
        }
    }
    printf("Find: %d\n", find);
    fclose(fp);
    return 0;
}

int myrewrite()
{
    FILE *fp;
    char buffer[8], shusei[16], yesno[8],
    name[16], sex[4], address[64];
    int no = 0, age, find = 0;

    fp = fopen(FNAME, "r+");
    if (fp == NULL) {
        perror("File Open Failed\n");
        return -1;
    }

    printf("Name to modify-- ");
    fgets(shusei, sizeof(shusei), stdin);
    shusei[strlen(shusei) - 1] = '\0';

    while (1) {
        fseek(fp, RECORDLEN * no++, SEEK_SET);
        if (fscanf(fp, "%s", name) == EOF)
            break;
        if (strstr(name, shusei) != NULL) {
            find = 1;
            fscanf(fp, "%d", &age);
            fscanf(fp, "%s", sex);
            fscanf(fp, "%s", address);
            printf("Name: %s\n", name);
            printf("Age: %d\n", age);
            printf("Sex: %s\n", sex);
            printf("Address: %s", address);
            printf("-------------------\n");
            printf("Do you modify this data?(Y/N): ");
            fgets(yesno, sizeof(yesno), stdin);
            if (yesno[0] == 'y' || yesno[0] == 'Y') {
                printf("Do you modify Name?(Y/N): ");
                fgets(yesno, sizeof(yesno), stdin);
                if (yesno[0] == 'y' || yesno[0] == 'Y') {
                    printf("Name-- ");
                    fgets(name, sizeof(name), stdin);
                    name[strlen(name) - 1] = '\0';
                }
                printf("Do you modify Age?(Y/N): ");
                fgets(yesno, sizeof(yesno), stdin);
                if (yesno[0] == 'y' || yesno[0] == 'Y') {
                    printf("Age-- ");
                    fgets(buffer, sizeof(buffer), stdin);
                    age = atoi(buffer);
                }
                printf("Do you modify Name?(Y/N): ");
                fgets(yesno, sizeof(yesno), stdin);
                if (yesno[0] == 'y' || yesno[0] == 'Y') {
                    printf("Sex(M/F)-- ");
                    fgets(sex, sizeof(sex), stdin);
                    sex[strlen(sex) - 1] = '\0';
                }
                printf("Do you modify Name?(Y/N): ");
                fgets(yesno, sizeof(yesno), stdin);
                if (yesno[0] == 'y' || yesno[0] == 'Y') {
                    printf("Address-- ");
                    fgets(address, sizeof(address), stdin);
                    address[strlen(address) - 1] = '\0';
                }
                fseek (fp, RECORDLEN * (no - 1), SEEK_SET);
                fprintf(fp, format, name, age, sex, address);
            }
        }
    }
    if (find == 0)
    printf("No data is need to modify");

    fclose(fp);
    return 0;
}