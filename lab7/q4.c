#include <stdio.h>

int main() 
{
    char arr[100];
    char *ptr = arr;
    int length = 0;   
    printf("Enter a string: ");
    scanf("%99s", arr); // limiting input to 99 characters

    // Counting length
    while (*ptr != '\0') {
        ptr++;
        length++;
    }
    printf("Length = %d\n", length);
    return 0;
}



reversing 
*#include <stdio.h>

int main() 
{
    char str[5];
    int i;

    // Reading 5 characters
    for (i = 0; i < 5; i++) {
        scanf(" %c", &str[i]); // Note the space before %c to consume any leftover newline characters
    }

    // Printing characters in reverse order
    for (i = 4; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;

m2 
#include<stdio.h>
#include<string.h>
int main (){
	char str[5];
	int i;
	gets(str);
	for (i=4;i>=0;i--)
	printf(" %c", str[i]);
}



