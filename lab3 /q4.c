#include<stdio.h>
int main()
{
float totalfuelcost, fuelconsumed, fuelaverage;
float singletripdist=1207;
float fuelprice_forward=118.0;
float fuelprice_return=123.0;
printf("enter fuel average of the car");
scanf("%f" , &fuelaverage );
if (fuelaverage <=0)
{printf ("please enter a positive average value\n");}
fuelconsumed = (2 * singletripdist) / fuelaverage ;
totalfuelcost = (singletripdist / fuelaverage) * fuelprice_forward
                    + (singletripdist / fuelaverage) * fuelprice_return;
printf("Total fuel consumed for the round trip: %.2f liters\n", fuelconsumed);
    printf("Total fuel cost for the round trip: %.2f\n", totalfuelcost);
}
