#include <stdio.h>
int main (){
	char i;
	for (i=A ;i<='F';i++)
	{
		if (i=='A' || i=='F')
		  printf("%c %c %c %c %c\n",i,i+1,i+2,i+3,i+4);
		else printf("%c       %c\n",i,i+4);    
	 }
}
