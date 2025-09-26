#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Building a Mad Libs Game

    char color[20];
    printf("Enter the name of a color: ");
    scanf("%s", color);

    char pluralNoun[20];
    printf("Enter the name of a plural noun: ");
    scanf("%s", pluralNoun);

    char celebrityNameF[20];
    char celebrityNameL[20];
    printf("Enter a celebrity name: ");
    scanf("%s%s", celebrityNameF, celebrityNameL);

    printf("\nRoses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityNameF, celebrityNameL);

    return 0;
}
