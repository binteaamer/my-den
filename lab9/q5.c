/*Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user.*/
 #include<stdio.h>
 #include<string.h>
 
void reverse(char arr[], int n);
int main(){
	char str[10];  int i ;
	printf("enter a string\n");
	scanf("%s", str);
	reverse(str, 10);
}
void reverse(char arr[], int n)
{
	strrev(arr);
	printf("reversed string is %s", arr);
}
