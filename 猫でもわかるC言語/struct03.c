#include <stdio.h>
#include <string.h>

struct Data {
    char name[32];
    int age;
    double bl;
    double bw;
    double bmi;
};

int struct_input(struct Data *);

int main()
{
    struct Data mydata;
    char format[] = "Profile of Ms. %s (%d years old)\n"
        "Height = %5.1f, Weight = %5.1fkg, BMI - %4.1f\n";
    char buffer[256];

    struct_input(&mydata);
    sprintf(buffer, format, mydata.name, mydata.age,
        mydata.bl, mydata.bw, mydata.bmi);
    printf(buffer);

    return 0;
}

int struct_input(struct Data *p)
{
    char name[32];

    printf("Name --- ");

    fgets(name, sizeof(name), stdin);
    if (strchr(name, '\n') != NULL) {
        name[strlen(name) - 1] - '\n';
    } else {
        while(getchar() != '\n');
    }
    strcpy(p->name, name);

    printf("Age --- ");
    scanf("%d", &p->age);
    printf("Height(cm) --- ");
    scanf("%lf", &p->bl);
    printf("Weight --- ");
    scanf("%lf", &p->bw);
    p->bmi = p->bw * 10000.0 / (p->bl * p->bl);

    return 0;
}