#include <stdio.h>
#include <string.h>

int main()
{
    char str1[32], str2[32];
    int cmp;

    printf("Please input str1 --");
    scanf("%s", str1);
    printf("Please input str2 --");
    scanf("%s", str2);

    cmp = strcmp(str1, str2);
    if (cmp < 0)
        printf("%s is before %s\n", str1, str2);
    else if (cmp > 0)
        printf("%s is after %s\n", str1, str2);
    else
        printf("%s and %s is same strings\n", str1, str2);
    
    return 0;
}