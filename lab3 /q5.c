#include <stdio.h>
int main (void)
{ float timeperiod, simpleintrest, rate, principle;
printf("enter principle between 100-1000000");
scanf("%f" , &principle);
if (principle<100 || principle>1000000 )
{printf("out of range /n" ) ;}

printf("enter the rate between 5%-10%");
scanf ("%f",  &rate);
if (rate<5 || rate>10)
{printf("out of range /n");}

printf("enter the time period between 1-10 years ");
scanf("%f" , &timeperiod);
if (timeperiod<1 || timeperiod>10)
{printf ("out of range")
;}
simpleintrest= (principle*timeperiod*rate)/100;
printf("simpleintrest is: %.2f " , simpleintrest);
return 0;
}
