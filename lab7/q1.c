#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i ;
    int temp=arr[5];
    for (i=5;i>0;i--){
      arr[i]=arr[i-1];}
    arr[0]=temp;
    
    for (i=0;i<6;i++)
    printf("%d ", arr[i]);}
      
