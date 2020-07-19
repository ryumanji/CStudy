#include <stdio.h>

int main()
{
    int a;
    int *lpa;

    lpa = &a;

    printf("Please input something number -----");
    scanf("%d", &a);
    printf("%d is inpted to a. \n", a);
    printf("%p is address of a. \n", &a);
    printf("*lpa is pointer of a. \n");
    printf("%d is value of lpa. \n", *lpa);

    return 0;
}