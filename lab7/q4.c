#include <stdio.h>

int main() 
{
	char arr[100];
	char *ptr= arr;
	int length=0;
	
	printf("enter a string");
	gets(arr);
	while(!*ptr=='/0')  //counting length  
	{
	 ptr++;
	length++;
    }
    printf("length=%d",length);
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
