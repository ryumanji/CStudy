#include <stdio.h>

int func(int x);

int main()
{
    int (*ptr1)(), (*ptr2)();
    
    ptr1 = main;
    ptr2 = func;

    printf("Address of main = %p\n", main);
    printf("Address of func = %p\n", func);

    return 0;
}

int func(int x)
{
    printf("x = %d\n", x);

    return 0;
}