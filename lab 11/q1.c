#include<stdio.h>
int main ()
{
FILE *filePointer = fopen("dummy.txt", "r");
char copy[50];
	
	if (filePointer == NULL) 
	{ 
    printf("Error opening file\n"); 
    return 1;   
    }
    fscanf(filePointer, "%s", copy);
    printf("I read Word: %s\n", copy);
fclose(filePointer);

    

FILE *filePointer2 = fopen("dummycopy.txt", "w");
if (filePointer == NULL) 
	{ 
    printf("Error opening file\n"); 
    return 1;   
    }
fprintf(filePointer2, "%s\n",copy);
fclose(filePointer2);
}
