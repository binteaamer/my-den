#include <stdio.h> 
int main ()
{ float itemcost, savedamount ,  newcost ;
printf ("enter item cost");
scanf ("%f" , &itemcost );

if (itemcost < 500 ) {
   printf (" no discount , itemcost is %f", itemcost );}

else if ( itemcost > 500 && itemcost <2000 )
     newcost = itemcost*0.95; 
  
else if ( itemcost >= 2000 && itemcost <= 4000 ) 
        newcost = itemcost*0.90; 
 
else if ( itemcost > 4000 && itemcost <=6000 )
        newcost = itemcost*0.80;
else 
   newcost = itemcost*0.75 ;
  
   savedamount= itemcost-newcost;
   printf ("costitem : %.2f savedamount: %.2f newcost %.2f ", itemcost , savedamount, newcost );
  
  return 0 ;
  }
