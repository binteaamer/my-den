//checking if a string is palindrome 


#include<stdio.h> // length of a string 
int main ()
{  int i,length,flag=1;
   char str[50];
   char strR[50];
   printf("enter a string\n");
   scanf("%s",str);
   i=0;
   while (str[i]!='\0')
    i++;// length
   length=i;
//reversing 
   for(i=0;i<length;i++)
      {
	   strR[i]=str[length-1-i];
      }
      strR[length]='\0';
printf("reverse is: %s\n", strR);

//checking if palindrome
for(i=0;i<length;i++){
   if(str[i]!=strR[i]){
     flag=0;} 
}
  if (flag == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
}
}
