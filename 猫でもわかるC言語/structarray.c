#define STUDENTNO 5
#define SUBJECTNO 3

#include <stdio.h>

struct Seireki {
    char name[32];
    int kokugo;
    int sugaku;
    int eigo;
};

int main()
{
    struct Seireki myclass[STUDENTNO] = {
        {"Tanaka",  80, 80, 55},
        {"Sato",    75, 90, 70},
        {"Ota",     50, 45, 30},
        {"Suzuki", 100, 55, 90},
        {"Kato",    60, 85, 35}
    };

    int i, sum0 = 0, sum1[SUBJECTNO], sum2[STUDENTNO];

    for (i = 0; i < SUBJECTNO; i++)
        sum1[i] = 0;
    for (i = 0; i < STUDENTNO; i++)
        sum2[i] = 0;

    for (i = 0; i < STUDENTNO; i++) {
        sum1[0] += myclass[i].kokugo;
        sum1[1] += myclass[i].sugaku;
        sum1[2] += myclass[i].eigo;
    }

    for (i = 0; i < STUDENTNO; i++)
        sum2[i] = myclass[i].kokugo + myclass[i].sugaku + 
                 myclass[i].eigo;
    
    for (i = 0; i < STUDENTNO; i++)
        sum0 += sum2[i];

    printf("**** ¬Ñ ****\n\n");

    printf("%6s %6s %6s %6s %6s\n",
        "Name", "Japanese", "Math", "English", "SUM");
    drawline();

    for (i = 0; i < STUDENTNO; i++)
        printf("%6s %6d %6d %6d %6d\n",
            myclass[i].name, myclass[i].kokugo, 
            myclass[i].sugaku, myclass[i].eigo, sum2[i]);

    drawline();
    printf("%6s %6.1f %6.1f %6.1f %6.1f\n",
        "Average",
        (double)sum1[0] / STUDENTNO,
        (double)sum1[1] / STUDENTNO,
        (double)sum1[2] / STUDENTNO,
        (double)sum0 / STUDENTNO);
    return 0;
}

int drawline(void)
{
    int i;
    for (i = 0; i < 35; i++)
        printf("-");
    printf("\n");

    return 0;
}