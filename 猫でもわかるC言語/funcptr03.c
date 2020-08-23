#include <stdio.h>

int main()
{
    int myfunc(char *, char *);
    int (*ptr)();
    
    ptr = myfunc;

    (*myfunc)("Tanaka", "Student");
    (*ptr)("Yamada", "Salaryman");
    myfunc("Sato", "Teacher");

    return 0;
}

int myfunc(char *str1, char *str2)
{
    printf("%s is %s.\n" ,str1, str2);
    return 0;
}