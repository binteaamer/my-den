#include<stdio.h>
int main ()
{   int num[10];
    int zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0, i;
	printf("enter 10 integers\n");
	for (i=0;i<10;i++)
    	scanf("%d", &num[i]);
		
	for (i=0;i<10;i++){	
	  switch(num[i]){
	  	case(0): zero++; break;
	  	case(1): one++; break;
	  	case(2): two++; break;
	  	case(3): three++; break;
	  	case(4): four++; break;	  	 				  		
	  	case(5): five++; break;
	  	case(6): six++; break;	
	  	case(7): seven++; break;
	  	case(8): eight++; break;
	  	case(9): nine++; break;  	
	  }
} 
    printf("Number of zeros: %d\n", zero);
    printf("Number of ones: %d\n", one);
    printf("Number of twos: %d\n", two);
    printf("Number of threes: %d\n", three);
    printf("Number of fours: %d\n", four);
    printf("Number of fives: %d\n", five);
    printf("Number of sixes: %d\n", six);
    printf("Number of sevens: %d\n", seven);
    printf("Number of eights: %d\n", eight);
    printf("Number of nines: %d\n", nine);
}
