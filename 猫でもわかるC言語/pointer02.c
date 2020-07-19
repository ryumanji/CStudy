#include <stdio.h>

int main()
{
    int *pa;
    int a;

    pa = &a;
    *pa = 5;

    printf("*pa = %d\n", *pa);
    printf("a = %d", a);

    return 0;
}