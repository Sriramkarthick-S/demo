#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *filePointer = 0;
    filePointer = fopen("projectFile.xls", "w");
    fputs("File created", filePointer);
    fclose(filePointer);
}