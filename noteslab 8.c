#include<stdio.h>
int main ()
{
	int i,j, arr[5]={6,9,8,7,5},temp;
	for (i=0;i<5;i++)//counting the next loop iterations 
	 {
	 	for(j=0;j<5;j++){ // checking every element   // if we use 5-1 it wont check out of bound 
		 
	 	 if (arr[j]>arr[j+1]){
		  
	 	    temp=arr[j+1]; //swapping
	 	    arr[j+1]=arr[j];
	 	    arr[j]=temp;
			 }
	 }}
for(i=0;i<5;i++)
printf(" %d",arr[i]);
}

//this is bubble sorting 

