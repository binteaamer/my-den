#include <stdio.h>

int main() {
    int rows = 5; 
    int i = 0, j = 0;

    while (i < rows) {
        j = 0;
        while (j < 4 * rows) {
            if (j % (2 * rows) == rows - i - 1 || j % (2 * rows) == rows + i) {
                printf("*");
            } else {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

// couldnt figure out how to make the curve 
