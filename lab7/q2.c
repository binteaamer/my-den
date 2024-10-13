#include <stdio.h>

int main() 
{ char ch[12],k;

 int a=0,e=0,i=0,o=0,u=0;
 
 printf("write a string");
 	scanf("%s",ch);
 
 for(k=0;k<12;k++){
 	if (ch[k]=='a' || ch[k]=='A')
 	   a++;
 	if (ch[k]=='e'|| ch[k]=='E')
 	   e++;
 	if (ch[k]=='i' || ch[k]=='I')
 	   i++;
 	if (ch[k]=='o' || ch[k]=='O')
 	   o++;
 	if (ch[k]=='u' || ch[k]=='U')
 	   u++;
 }
  printf("a=%d\ne=%d\ni=%d\no=%d\nu=%d\n",a,e,i,o,u);
}
