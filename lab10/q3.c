#include <stdio.h>

#define MAX_TEMP 30 

void checktemp(int temp);

int main() {
    int temp;
    
    for (;;) {  
        printf("Enter temperature (or -999 to stop): ");
        scanf("%d", &temp);
        
        if (temp == -999) {
            break;
        } else {
            checktemp(temp);  
        }
    }
    
    return 0;
}

void checktemp(int temp) {
    static int count = 0;  

    if (temp > MAX_TEMP) {
        count++; 
    }

    printf("Temperature: %d°C\n", temp);
    printf("Times temperature exceeded limit: %d\n", count);
}
