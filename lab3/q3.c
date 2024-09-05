#include<stdio.h>
int main (void)
 {
 	float salary, taxrate, taxamount, salaryaftertax;
 	printf("enter salary/n");
 	scanf("%f" , &salary);
 	printf("enter tax rate");
 	scanf("%f" ,&taxrate);
 	taxamount=salary*(taxrate/100);
 	salaryaftertax= salary-taxamount;
 	printf("salaryaftertax: %.2f\n taxamount is: %.2f\n", salaryaftertax, taxamount);
 	
	
}


