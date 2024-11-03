/*Create a function that returns the maximum and minimum element in an integer array. Use this
function in the main program to find the maximum and minimum from an array entered by the
user. */
#include<stdio.h>
void max(int arr[], int n);
void min(int arr[], int n);
int main (){
	int i, n;
	printf("enter the number of digits you want to enter\n");
	scanf("%d", &n);
	int num[n];
	printf("enter integers\n");
	for (i=0;i<n;i++)
	{
		scanf("%d", &num[i]);
	}
	max(num, n);
	min(num,n);
}
void max(int arr[], int n){
	int max=arr[0];
	for(int i=0;i<n;i++)
	{if(arr[i]>max)
	max=arr[i];
	}
	printf("maximum integer : %d\n", max );
}
void min(int arr[], int n){
	int min=arr[0];
	for(int i=0;i<n;i++)
	{if(arr[i]<min)
	min=arr[i];
	}
	printf("minimum integer : %d\n", min );
}
