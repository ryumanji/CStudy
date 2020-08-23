#include <stdio.h>

int func(int x);

int main()
{
    printf("Address of main = %p\n", main);
    printf("Address of func = %p\n", func);

    return 0;
}

int func(int x)
{
    printf("x = %d\n", x);

    return 0;
}