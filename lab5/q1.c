#include <stdio.h>
int main () {
float calories , fatgrams , percent_calorie, calorietotal;
printf("enter number of calories in your food");
scanf("%f", &calories);
printf("enter fatgrams of your food");
scanf("%f" , &fatgrams);
if (calories<0 || fatgrams<0){
   printf("invalid input");}
else {
      calorietotal= fatgrams*9;
     if  (calorietotal > calories){
         printf ("either the calories or fat grams were incorrectly entered.");}
     else {percent_calorie= (calories/calorietotal);
         printf("your calorie percentage is: %.2f\n", percent_calorie);}}
return 0;}
