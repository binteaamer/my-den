#include<stdio.h>
int main (){
	int num,i,sum=0,digit,temp;
	printf("enter a number\n");
	scanf("%d",&num);
	temp=num;
	for(i=1;num!=0;i++){
		digit=num%10;
		num=num/10;
	sum=sum+digit*digit*digit;}
	if (temp==sum){
	printf("armstrong number is :%d\n",sum);
} else printf("number is not armstrong");
	   
}
