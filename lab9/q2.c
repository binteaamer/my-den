/*Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/
#include<string.h>
#include<stdio.h>
void swapIntegers(int, int);
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	swapIntegers(num1,num2);
	printf("original numbers % d , %d ", num1 , num2);
	
}
void swapIntegers (int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
 	printf("swapped numbers % d , %d ", a , b);
}

