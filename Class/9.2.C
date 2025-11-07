//Open an existing file and read its content character by character, and then close the file.

#include <stdio.h>
int main() {
    FILE *filePtr;
    const char *filename = "output.txt";
    int ch;

    filePtr = fopen(filename, "r");
    if (filePtr == NULL) {
        printf("Error opening file %s for reading.\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(filePtr)) != EOF) {
        putchar(ch);
    }

    fclose(filePtr);

    return 0;
}
