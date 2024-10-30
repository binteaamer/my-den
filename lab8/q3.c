#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j, k, isSaddlePoint;
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Saddle Points in the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            isSaddlePoint = 1;
            for (k = 0; k < 3; k++) {
                if (matrix[i][j] > matrix[i][k]) {
                    isSaddlePoint = 0;
                    break;
                }
            }
            if (isSaddlePoint) {
                for (k = 0; k < 3; k++) {
                    if (matrix[i][j] < matrix[k][j]) {
                        isSaddlePoint = 0;
                        break;
                    }
                }
            }
            if (isSaddlePoint) {
                printf("Saddle Point: %d at position (%d, %d)\n", matrix[i][j], i, j);
            }
        }
    }

    return 0;
}
