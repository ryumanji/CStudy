#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Data {
    char name[32];
    char tel[32];
} MyDataType, *lpMyDataType;

int menu();
int meibo_input(lpMyDataType);
int meibo_output(lpMyDataType);

int main()
{
    int selectno, loopend = 0;

    MyDataType mydata[10];
    lpMyDataType lpMydata = mydata;

    memset(mydata, '\0', sizeof(MyDataType[10]));

    while (1) {
        selectno = menu();

        switch (selectno) {
            case 1:
                meibo_input(lpMydata);
                break;
            case 2:
                meibo_output(lpMydata);
                break;
            default:
                loopend = 1;
                break;
        }
    if (loopend)
        break;
    }
    return 0;
}

int menu()
{
    char ret[8];

    printf("****** MENU ******\n");
    printf("1: Input Data\n");
    printf("2: Display Data\n");
    printf("0: Exit\n");
    printf("******************\n");
    printf("---->");
    fgets(ret, sizeof(ret), stdin);
    return atoi(ret);
}

int meibo_input(lpMyDataType lpData)
{
    char strno[8];
    int  no;
    char name[32];
    char tel[32];

    printf("Which Number do you input between 9 from 0? -- ");
    fgets(strno, sizeof(strno), stdin);
    if (strno[0] < '0' || strno[0] > '9') {
        printf('False Number.\n');
        return -1;
    }
    strno[1] = '\0';
    no = atoi(strno);

    printf("Name -- ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    strcpy(lpData->name, name);

    printf("CallNumber -- ");
    fgets(tel, sizeof(tel), stdin);
    tel[strlen(tel) - 1] = '\0';
    strcpy(lpData->tel, tel);

    return 0;
}

int meibo_output(lpMyDataType lpData)
{
    char strno[8];
    int no;

    printf("Which Nuber do you display? -- ");
    fgets(strno, sizeof(strno), stdin);
    if (strno[0] < '0' || strno[0] > '9') {
        printf('False Number.\n');
        return -1;
    }
    strno[1] = '\0';
    no = atoi(strno);

    if (strcmp(lpData->name, "") == 0) {
        printf("No Data is here.\n");
        return -1;
    }
    printf("Name -- %s\n", lpData->name);
    printf("CallNumber -- %s\n", lpData->tel);

    return 0;
}