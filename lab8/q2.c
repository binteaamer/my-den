#include <stdio.h>

int main() {
    int n, start;
    int arr[2][50][2]; 
  
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the value of n (number of sets in each array): ");
    scanf("%d", &n);
    
    int i, j, currentNum = start;

    for (i = 0; i < 2; i++) { 
        for (j = 0; j < n; j++) {
            if (i == 0) { // Even array
                while (currentNum % 2 != 0) currentNum--;
                arr[i][j][0] = currentNum;
                currentNum -= 2;
                arr[i][j][1] = currentNum;
                currentNum -= 2;
            } else { // Odd array
                while (currentNum % 2 == 0) currentNum--;
                arr[i][j][0] = currentNum;
                currentNum -= 2;
                arr[i][j][1] = currentNum;
                currentNum -= 2;
            }
        }
    }
    printf("Even arrays:\n");
    for (j = 0; j < n; j++) {
        printf("[%d, %d]\n", arr[0][j][0], arr[0][j][1]);
    }

    printf("Odd arrays:\n");
    for (j = 0; j < n; j++) {
        printf("[%d, %d]\n", arr[1][j][0], arr[1][j][1]);
    }

    return 0;
}
