#include <stdio.h>
#include <string.h>

int main()
{
    char name[64], mr[] = "Mr.";

    printf("Please input your name. -- ");
    fgets(name, sizeof(name) - sizeof(mr), stdin);
    if (strchr(name, '\n'))
        name[strlen(name) - 1] = '\0';

    printf("We waited you, %s \n",
        strcat(mr, name));

    return 0;
}