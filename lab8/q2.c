#include <stdio.h>

int main() {
    int n, start;
    int arr[2][50][2]; 
  
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the value of n (number of sets in each array): ");
    scanf("%d", &n);
    
    int i, j, k = start;//k is the number currently being added in the coloumn

    for (i = 0; i < 2; i++) { 
        for (j = 0; j < n; j++) {
            if (i == 0) { // Even array
                while (k % 2 != 0) k--;//to go one place back even to odd 
                arr[i][j][0] = k;
                k -= 2;//get next even number 
                arr[i][j][1] = k;
                k -= 2;
            } else { // Odd array
                while (k % 2 == 0) k--;
                arr[i][j][0] = k;
                k -= 2;
                arr[i][j][1] = k;
                k -= 2;
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
