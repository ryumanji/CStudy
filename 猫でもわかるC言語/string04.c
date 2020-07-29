#include <stdio.h>
#include <string.h>

int main()
{
    char str[32];
    size_t len;

    printf("Please input strings ---");
    scanf("%s", str);

    len = strlen(str);

    printf("%d is length of %s\n", len, str);

    return 0;
}