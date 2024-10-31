#include <stdio.h>
#include <string.h>

int main () 
{ char source[5], destination[10];
scanf("%s", source);
scanf("%s", destination);
int n;
scanf("%d", &n);
  strncat(destination, source, n);
  printf("%s", destination);	
}
