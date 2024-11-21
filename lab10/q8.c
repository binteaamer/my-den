/*Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and 
continues searching in the subsequent indices until it either finds the target or exhausts
the array. */

#include<stdio.h>

void linearSearch( array [], int size, int target, int index);
int main ()
{
  int array[]={1,2,3,4,5,6,7,8,9,10};
  int size= sizeof(array)/sizeof(array[0]);
  printf("the array is\n");
  for(int i=0; i<size;i++)
    printf("%d\n", array[i]);
  printf("enter the target element");
  scanf("%d", &target);
 // printf("enter the current index");
  linearSearch( array ,size,target,0);}//starting the search from index o 

  void linearSearch( array [], int size, int target, int index){
    if (index == size) {
        printf("Element %d not found in the array.\n", target);
        return;}
    if (array[index] == target) {
        printf("Element %d found at index %d.\n", target, index);
        return;
    }
     linearSearch(array, size, target, index + 1);}
  
  
  
  
  

}
