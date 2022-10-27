#include<stdio.h>

void main()
{
    FILE *filePointer;
    char inputString[10];
    filePointer = fopen("sacra.txt", "w");
    fputs("Sacra Systems", filePointer);
}