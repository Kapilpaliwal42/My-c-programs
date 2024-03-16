#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[100];
    char character;
    int charCount = 0;

    // Get the file name from the user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file in read mode
    filePointer = fopen(fileName, "r");

    // Check if the file exists
    if (filePointer == NULL) {
        printf("File not found or unable to open.\n");
        return 1; // Exit the program with an error code
    }

    // Count characters in the file
    while ((character = fgetc(filePointer)) != EOF) {
        charCount++;
    }

    // Close the file
    fclose(filePointer);

    // Display the result
    printf("The file %s has %d characters.\n", fileName, charCount);

    return 0; // Exit the program successfully
}
