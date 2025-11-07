//Open a file, read its content line by line, and display each line on the console.

#include <stdio.h>
int main() {
    FILE *filePtr;
    const char *filename = "output.txt";
    char buffer[256];

    filePtr = fopen(filename, "r");
    if (filePtr == NULL) {
        printf("Error opening file %s for reading.\n", filename);
        return 1;
    }
    printf("Contents of %s:\n", filename);
    while (fgets(buffer, sizeof(buffer), filePtr) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePtr);
    return 0;
}