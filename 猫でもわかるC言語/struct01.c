#include <stdio.h>
#include <string.h>

struct Man {
    char name[32];
    int age;
};

int main()
{
    struct Man student;

    strcpy(student.name, "Ryuma Sugiura");
    student.age = 20;

    printf("The student's name is %s.\n", student.name);
    printf("Age is %d years old.\n", student.age);

    return 0;
}