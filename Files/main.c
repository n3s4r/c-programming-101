#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];

    FILE *filepointer = fopen("nigga.txt", "r");

    fgets(line, 255, filepointer);
    fgets(line, 255, filepointer);
    printf("%s", line);

    fclose(filepointer);
    return 0;
}
