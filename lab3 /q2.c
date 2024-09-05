#include<stdio.h>
int main (void)
 {
 	int a,b,temp;
 	printf(" enter two numbers:/n");
 	scanf("%d" ,&a);
 		printf(" enter second number:/n");
 	scanf("%d",&b);
 	temp=a;
 	a=b;
 	b=temp;
 	printf("a is %d and b is :%d",a,b);
