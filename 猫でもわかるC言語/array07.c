#define NO 3

#include <stdio.h>

int main()
{
    int point[][2] = {
        { 80, 80},
        {100, 98},
        { 60, 80},
    };
    
    int i, j, sum = 0, p_sum[NO];
    double ave;

    for (i = 0; i < NO; i++) {
        sum += point[i][0];
    }
    ave = (double)sum / NO;

    printf("Average of ENGLISH is %5.1f points\n\n", ave);    

    sum = 0;
    for (i = 0; i < NO; i++) {
        sum += point[i][1];
    }
    ave = (double)sum / NO;

    printf("Average of MATH is %5.1f points\n\n", ave);

    for ( i = 0; i < NO; i++)
        p_sum[i] = 0;

    for (i = 0; i < NO; i++) {
        for (j = 0; j < 2; j++) {
            p_sum[i] += point[i][j];
        }
        printf("Number %d All of points %d\n",i + 1, p_sum[i]);
    }
    
    return 0;
}