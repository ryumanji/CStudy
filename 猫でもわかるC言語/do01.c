#include <stdio.h>

int main()
{
    int n;

    do {
        printf("input num(end:0)--- ");
        scanf("%d", &n);
        printf("You inputed %d\n", n);
    } while (n);
    
    return 0;
}