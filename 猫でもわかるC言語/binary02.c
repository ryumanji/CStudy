#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char *str = "ABC";
    int a[3] = {14, 15, 16};

    fp = fopen("binary.b", "wb");
    fwrite(str, sizeof(char), strlen(str), fp);
    fwrite(a, sizeof(int), 3, fp);
    fclose(fp);

    printf("Written\n");
    return 0;
}