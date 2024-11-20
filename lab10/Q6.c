/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages*/
#include<stdio.h>
typedef struct {
char package_name[20];
char destination[20];
int duration;
float cost;
int seats_available;
}
travel;

int main ()
{ struct travel user1; 
  printf(" enter the package name "); scanf("%s", &
}
