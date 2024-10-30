#include <stdio.h>

int main() {
    int matrixA[3][3], matrixB[3][3], resultMatrix[3][3], subtractMatrix[3][3];
    int i, j, k;
    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            resultMatrix[i][j] = 0; 
            for (k = 0; k < 3; k++) {
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    printf("\nResultant Matrix (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            subtractMatrix[i][j] = matrixA[i][j] - resultMatrix[i][j];
        }
    }
    printf("\nMatrix A - Resultant Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", subtractMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
