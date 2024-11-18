#include<studio.h>
#include<string.h>
void elements (int arr[], int n, int start);
int main(){
int num[]={0,1,2,3,4,5);

int start=num[0];

int size= sizeof(num)/sizeof(num[0]);

elements (num, size, start);

printf("\n\n");

void elements (int arr[], int n, int start)

if(start >=n){//base condition
return;}

else {
printf("%d", arr[start]);
elements (arr, n, start+1);}

} 


