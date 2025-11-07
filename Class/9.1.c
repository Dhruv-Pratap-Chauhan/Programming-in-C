//Write a program to create a new file and write text into it.

#include <stdio.h>
int main() {
    FILE *filePtr;
    const char *filename = "output.txt";
    const char *text = "Hello, this is a sample text written to the file.\n";

    filePtr = fopen(filename, "w");
    if (filePtr == NULL) {
        printf("Error opening file %s for writing.\n", filename);
        return 1;
    }

    fprintf(filePtr, "%s", text);

    fclose(filePtr);

    printf("Text successfully written to %s\n", filename);
    return 0;
}