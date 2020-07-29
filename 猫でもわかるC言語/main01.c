#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    if (argc == 1) {
        printf("It is no commandline arguments\n");
        return -1;
    }
    for (i = 0; i < argc; i++)
        printf("argv[%d] is [%s].\n", i, argv[i]);

    return 0;
}