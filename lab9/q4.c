/*Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation.*/
#include<string.h>
#include<stdio.h>

void add(int ,int);
void sub(int ,int);
void prod(int ,int);
void div(int ,int);
int main ()
{
	int num1, num2,choice;
	printf("choose the basic arithmetic operations you want to perform.\n1: addition\n2: subtraction\n3: multiplication\n4: division\n ");
	scanf("%d",&choice);
	printf("enter two operands");
	scanf("%d %d",&num1, &num2);
	
	if(choice==1)
	add(num1 , num2);
	else if (choice==2)
	sub(num1 , num2);
	else if (choice==3)
	prod(num1 , num2);
	else if (choice==4)
	div(num1 , num2);
}
void add(int a ,int b){
   printf("sum is %d", a+b);
}
