/*Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified content back to the file.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 10000 
void replaceWordInFile(const char *filename, const char *oldWord, const char *newWord) {
    FILE *file;
    char buffer[MAX_SIZE];
    char tempBuffer[MAX_SIZE];
    char *pos;
    int oldLen = strlen(oldWord);
    int newLen = strlen(newWord);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }
    fread(buffer, sizeof(char), MAX_SIZE, file);
    buffer[MAX_SIZE - 1] = '\0'; 
    fclose(file);
    tempBuffer[0] = '\0'; 
    char *start = buffer;

    while ((pos = strstr(start, oldWord)) != NULL) {
    
        strncat(tempBuffer, start, pos - start);

        strcat(tempBuffer, newWord);
 
        start = pos + oldLen;
    }
    strcat(tempBuffer, start);
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }
    fprintf(file, "%s", tempBuffer);
    fclose(file);

    printf("Word replaced successfully.\n");
}

int main() {
    char filename[100], oldWord[50], newWord[50];

    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the word to replace: ");
    scanf("%s", oldWord);
    printf("Enter the new word: ");
    scanf("%s", newWord);
    replaceWordInFile(filename, oldWord, newWord);

    return 0;
}
