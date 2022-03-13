#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charactername[] = "John";
    int characterage = 35;
    printf("There onece was a man named %s\n", charactername);
    printf("he was %d years old.\n", characterage);
    characterage = 50;
    charactername[] = "John";
    printf("he realy liked the name %s\n", charactername);
    printf("but did not like being %d.\n", characterage);

    return 0;
}
