#include <stdio.h>
#include <stdlib.h>

int main()
{
    // how to use variables

    char fraza[] = "hello world";
    char characterName[] = "Rene";
    int characterAge = 35;
    printf("%s\n",fraza);
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 23;
    printf("He really liked name %s.\n",characterName);
    printf("But did not like being %d\n",characterAge);

    printf("my fav %s is %d","number",12);
    return 0;
}
