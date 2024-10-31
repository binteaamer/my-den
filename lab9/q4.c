#include<string.h>
#include<stdio.h>
void isprime(int);
int main(){
	int num;
	scanf("%d",&num);
	isprime(num);
}
void isprime (int a){
	int prime=0;
	for (int i=2; i<a;i++ ){
		if(a%i==0)
		prime=1;
	}
 	if(prime==0)
 	printf("number% d is prime" ,a );
 	else printf("number% d is not prime", a );	 
}

