#include <stdio.h>

int  main()
{
    char buffer[128], name[] = "Ryuma Sugiura";

    int age = 20;
    double bl = 167.0;
    double bw = 51.0;

    sprintf(buffer,
        "Name --- %s\n", name);
    printf(buffer);

    sprintf(buffer,
        "Age --- %d\n", age);
    printf(buffer);

    sprintf(buffer,
        "Body length(cm) --- %5.1f\n", bl);
    printf(buffer);

    sprintf(buffer,
        "Body weight(kg) --- %5.1f\n", bw);
    printf(buffer);

    sprintf(buffer,
        "\nMr.%s's profile\n"
        "Age is %d, Body length is %5.1fcm, Body weight is %5.1fkg, BMI is %4.1f\n",
        name, age, bl, bw, bw * 10000.0 / (bl * bl));
    printf(buffer);

    return 0;
}