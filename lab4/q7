#include <stdio.h>
int main ( ) {
int c_id, units;
float total_bill=0; 
char c_name[50] ;

printf("enter your name \n");
scanf ("%s" , &c_name);
printf("enter your customer id \n");
scanf ("%d" , &c_id);
printf ("enter your total units of electricity\n ");
scanf ("%d" , &units); 

if ( units <=199 && units >=0) 
   { total_bill = 16.20*units; }
else if (units >= 200 && units <300 )
   {total_bill = 20.10*units ;}
else if (units >= 300 && units <500 )
   {total_bill = 27.10*units ;}
else 
  {total_bill = 35.90*units ;}

if (total_bill > 18000 ){ 
total_bill+= total_bill+ total_bill*0.15 ;}

printf("\nElectricity Bill\n");
    printf("C_id: %d\n", c_id);
    printf("Customer Name: %s\n", c_name);
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", total_bill);
return 0 ;
}


