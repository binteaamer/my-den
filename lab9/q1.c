/*Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: &quot;madam&quot;, &quot;racecar&quot;, &quot;level&quot;, &quot;radar&quot;.*/


#include<stdio.h>
#include<string.h>
void ispalindrome(char a[]);
int main ()
{
	char str1[5][20]; int i ;
	for (i=0;i<5;i++)
	{
	scanf(" %s",str1[i]);}
    for (i=0;i<5;i++){
	ispalindrome(str1[i]);
	}
	
}
void ispalindrome(char a[]){
char str2[20];
strcpy(str2, a);
if ((strcmp(a,strrev(str2))==0)) {
 printf("palindrome\n");
}
else {
printf("not  palindrome\n");}
}
