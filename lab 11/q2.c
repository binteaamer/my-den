/*How would you implement a program to count the occurrences of each word in a text file? Write the approach and code.*/
I will Open the file, read each word, store unique words in an array, count occurrences in a parallel array, and print the results.

  #include <stdio.h>
#include <string.h>

#define MAX_WORDS 1000  // Maximum number of unique words
#define MAX_LENGTH 50   // Maximum length of a word

int main() {
    FILE *file;
    char word[MAX_LENGTH];
    char words[MAX_WORDS][MAX_LENGTH];
    int counts[MAX_WORDS] = {0};
    int wordCount = 0;
    int i, found;

  
    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    while (fscanf(file, "%s", word) != EOF) {

        found = 0;
        for (i = 0; i < wordCount; i++) {
            if (strcmp(words[i], word) == 0) {
                counts[i]++;
                found = 1;
                break;
            }
        }
        if (!found && wordCount < MAX_WORDS) {
            strcpy(words[wordCount], word);
            counts[wordCount] = 1;
            wordCount++;
        }
    }

    fclose(file);
    printf("Word occurrences:\n");
    for (i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i], counts[i]);
    }

    return 0;
}
