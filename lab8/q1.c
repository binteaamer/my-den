#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (i = lower; i <= upper; i++) {
    
        isPrime = 1;

        if (i < 2) {
            isPrime = 0;
        } else {

            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
