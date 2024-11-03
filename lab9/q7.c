#include <stdio.h>
#include <string.h>

#define ROWS 5
#define MAX_LEN 100

void sortString(char arr[ROWS][MAX_LEN]) {
    char temp[MAX_LEN]; // Temporary string for swapping

    for (int i = 0; i < ROWS - 1; i++) {
        for (int j = 0; j < ROWS - i - 1; j++) {
          if (arr[j][0] > arr[j + 1][0]) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

void printArray(char arr[ROWS][MAX_LEN]) {
    for (int i = 0; i < ROWS; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[ROWS][MAX_LEN] = {"HELLO", "JELLO", "MELLO", "TELLO", "BELLO"};

    printf("Original Array:\n");
    printArray(arr);
    sortString(arr);

    printf("\nSorted Array by First Character's ASCII Value:\n");
    printArray(arr);

    return 0;
}
