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

#include<stdio.h>
int main ()
{
	int i,j, arr[6][2]={0};  // tells thhat it is one array with more array in between , 6 aprtments with 2 residents in each 
	for (i=0;i<6;i++)
	{
		
		for(j=0;j<2;j++) // controls value within the one array chosen 
		{
		 arr[i][j]=j;}
	}
	j=0;
	 for(i=0;i<6;i++)
	{
		printf("app no : %d re : %d re : %d \n",i,arr[i][j], arr[i][j+1]);
	}
}
	
