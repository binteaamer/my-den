#include<stdio.h>
int main ()
{int i,N,prime=0;
 printf("enter A number");
 scanf("%d",&N);
 for (i=2;i<N;i++)
       { if(N%i==0) 
        prime=1;
	}
	if (prime==0){
printf("entered number %d is prime",N);}
else printf("not a prime number");
return 0;
}
