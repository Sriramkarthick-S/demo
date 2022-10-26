#include<stdio.h>
void main()
{
    FILE *filePointer;
    filePointer = fopen("newFile.txt", "w");
    fputs("Sacra Systems", filePointer);
}