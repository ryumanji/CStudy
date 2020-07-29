#include <stdio.h>
#include <string.h>

int main()
{
    char str[64];

    printf("Please input strings --");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';

    printf("Is the inputted character string [%s]?\n", str);
    return 0;
}