#include <stdio.h>
int main ()
{int num ;
  char month ;
    // a=0 april a1 =august 
            // j0= january j1 = june j3= july 
            //  m0= march m1=may 
            //f0 = feb  
 printf("enter month and number ");
 scanf ("%c" "%d", &month,&num );
 if ( month== 'a'&& num==00 ){
  printf ("april");}
 
 else if (month=='a' && num==1) {
 	printf ("august");}
else if (month=='j' && num==0) {
     printf ("january ");}
else if (month=='j' && num==1) {
     printf ("june ");}
else if (month=='j' && num==2) {
     printf ("july ");}
else if (month=='m' && num==0) {
     printf ("march ");}
else if (month=='m' && num==1) {
     printf ("may ");}
else if (month=='f' && num==0) {
     printf ("feburary ");}
else printf (" wrong input %c %d",month , num ) ;
return 0 ;
}
