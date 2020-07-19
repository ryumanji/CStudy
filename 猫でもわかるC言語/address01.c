#include <stdio.h>

int main()
{
    char c;
    int i;
    double d, e;

    printf("%p is address of c\n", &c);
    printf("%p is address of i\n", &i);
    printf("%p is address of d\n", &d);
    printf("%p is address of e\n", &e);

    return 0;
}