#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE* filePointer;
	char fileCharacter;

	filePointer = fopen("sacra.txt", "r");
	do {
		fileCharacter = fgetc(filePointer);
		printf("%c", fileCharacter);
	} while (fileCharacter != EOF);
	fclose(filePointer);
	return 0;
}
