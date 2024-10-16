#include <stdio.h>

int main() {
    int arr[5], i, j, count=0;
    //int n = sizeof(arr) / sizeof(arr[0]);

    // Storing elements
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Comparing elements to count occurrences
    for (i = 0; i < 5; i++) {
        count = 0;
        for (j = 0; j < 5; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            printf("Element %d has occurred %d times\n", arr[i], count);
            break; // Added to ensure we only print once for each duplicate element
        }
    }

    return 0;
}



//tried many times without nesting but not possible 
